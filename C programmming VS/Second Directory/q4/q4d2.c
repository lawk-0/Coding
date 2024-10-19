#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at a specific position
void insertAtPosition(Node** head, int data, int position) {
    Node* newNode = createNode(data);
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        printf("Node inserted\n");
        return;
    }

    Node* current = *head;
    for (int i = 1; current != NULL && i < position - 1; i++) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
    printf("Node inserted\n");
}

// Function to delete a node from a specific position
void deleteFromPosition(Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = *head;

    if (position == 1) {
        *head = temp->next;
        free(temp);
        printf("Node deleted\n");
        return;
    }

    Node* prev = NULL;
    for (int i = 1; temp != NULL && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Node deleted\n");
}

// Function to count the number of nodes in the list
int countNodes(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Function to traverse the linked list
void traverse(Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Function to search for an element in the list
void search(Node* head, int data) {
    int position = 1;
    while (head != NULL) {
        if (head->data == data) {
            printf("Element %d found at position %d\n", data, position);
            return;
        }
        head = head->next;
        position++;
    }
    printf("Element %d not found\n", data);
}

// Function to sort the list in ascending order
void sort(Node** head) {
    if (*head == NULL || (*head)->next == NULL) return;

    Node* current = *head;
    Node* index = NULL;
    int temp;

    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (current->data > index->data) {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
    printf("List sorted\n");
}

// Function to reverse the linked list
void reverse(Node** head) {
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    printf("List reversed\n");
}

int main() {
    Node* head = NULL;
    int n, choice, element, position;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        insertAtPosition(&head, data, i + 1);
    }
do {
        printf("MENU:\n");
        printf("1. Insert the node at a position\n");
        printf("2. Delete a node from specific position\n");
        printf("3. Count\n");
        printf("4. Traverse\n");
        printf("5. Search\n");
        printf("6. Sort\n");
        printf("7. Reverse\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &element);
                printf("Enter position: ");
                scanf("%d", &position);
                insertAtPosition(&head, element, position);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteFromPosition(&head, position);
                break;
            case 3:
                printf("Number of nodes: %d\n", countNodes(head));
                break;
            case 4:
                printf("Linked List: ");
                traverse(head);
                break;
            case 5:
                printf("Enter element to search: ");
                scanf("%d", &element);
                search(head, element);
                break;
            case 6:
                sort(&head);
                break;
            case 7:
                reverse(&head);
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 8);
}