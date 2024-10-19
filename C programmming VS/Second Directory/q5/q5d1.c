#include <stdio.h>
#include <stdlib.h>

// Define a struct for the doubly linked list node
typedef struct Node {
    int value;
    struct Node* next;
    struct Node* prev;
} Node;

void insertAtPosition(Node** head, int newValue, int position);
void deleteAtPosition(Node** head, int position);
void traverse(Node* head);

int main() {
    Node* head = NULL;
    int choice, value, position, numNodes;

    printf("Enter number of nodes: ");
    scanf("%d", &numNodes);
    printf("Enter the elements: ");
    for (int i = 0; i < numNodes; i++) {
        scanf("%d", &value);
        insertAtPosition(&head, value, i + 1);
    }

    do {
        printf("\nMENU:\n");
        printf("1. Insert the node at a position\n");
        printf("2. Delete a node from specific position\n");
        printf("3. Traversal\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &value);
                printf("Enter position: ");
                scanf("%d", &position);
                insertAtPosition(&head, value, position);
                printf("Node inserted\n");
                break;
            case 2:
                printf("Enter position: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
                printf("Node deleted\n");
                break;
            case 3:
                traverse(head);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    // Free the allocated memory before exiting
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

void insertAtPosition(Node** head, int newValue, int position) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = newValue;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (position == 1 || *head == NULL) {
        newNode->next = *head;
        if (*head != NULL) (*head)->prev = newNode;
        *head = newNode;
        return;
    }

    Node* current = *head;
    for (int i = 1; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL) current->next->prev = newNode;
    current->next = newNode;
}

void deleteAtPosition(Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* current = *head;
    if (position == 1) {
        *head = current->next;
        if (*head != NULL) (*head)->prev = NULL;
        free(current);
        return;
    }

    for (int i = 1; i < position && current != NULL; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    if (current->next != NULL) current->next->prev = current->prev;
    if (current->prev != NULL) current->prev->next = current->next;
    free(current);
}

void traverse(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* current = head;
    printf("The list is: ");
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
    printf("\n");
}