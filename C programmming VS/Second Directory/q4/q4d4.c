// wap to create a single linked list and perform the following menu based operation using functions
/*
insert at begginning
insert at end 
traverse
count node
search an element
exit 
*/
#include <stdio.h>
#include <stdlib.h>

// Define a struct for the linked list node
typedef struct Node {
    int value;
    struct Node* next;
} Node;

void insertAtBeginning(Node** head, int newValue);
void insertAtEnd(Node** head, int newValue);
void traverse(Node* head);
int countNodes(Node* head);
int searchElement(Node* head, int key);

int main() {
    Node* head = NULL;
    int choice, value;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Traverse\n");
        printf("4. Count Nodes\n");
        printf("5. Search an Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at beginning: ");
                scanf("%d", &value);
                insertAtBeginning(&head, value);
                break;
            case 2:
                printf("Enter value to insert at end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 3:
                traverse(head);
                break;
            case 4:
                printf("Total nodes: %d\n", countNodes(head));
                break;
            case 5:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (searchElement(head, value)) {
                    printf("Element found.\n");
                } else {
                    printf("Element not found.\n");
                }
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    // Free the allocated memory before exiting
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

void insertAtBeginning(Node** head, int newValue) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = newValue;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head, int newValue) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = newValue;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void traverse(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* current = head;
    printf("Linked list: ");
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int searchElement(Node* head, int key) {
    Node* current = head;
    while (current != NULL) {
        if (current->value == key) {
            return 1; // Found
        }
        current = current->next;
    }
    return 0; // Not found
}