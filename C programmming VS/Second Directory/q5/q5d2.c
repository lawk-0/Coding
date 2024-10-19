#include <stdio.h>
#include <stdlib.h>

// Define a struct for the circular linked list node
typedef struct Node {
    int value;
    struct Node* next;
} Node;

void createCircularList(Node** head, int numNodes);
void displayCircularList(Node* head);

int main() {
    Node* head = NULL;
    int numNodes;

    printf("Enter number of nodes: ");
    scanf("%d", &numNodes);

    createCircularList(&head, numNodes);
    printf("\nCircular linked list: ");
    displayCircularList(head);

    // Free the allocated memory
    Node* temp;
    Node* current = head;
    if (current != NULL) {
        do {
            temp = current;
            current = current->next;
            free(temp);
        } while (current != head);
    }

    return 0;
}

void createCircularList(Node** head, int numNodes) {
    Node* prev = NULL;

    for (int i = 1; i <= numNodes; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        printf("Enter info of node%d: ", i);
        scanf("%d", &newNode->value);
        newNode->next = NULL;

        if (*head == NULL) {
            *head = newNode;
        } else {
            prev->next = newNode;
        }
        prev = newNode;
    }

    if (prev != NULL) {
        prev->next = *head;  // Make it circular by connecting the last node to the head
    }
}

void displayCircularList(Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* current = head;
    do {
        printf("%d ", current->value);
        current = current->next;
    } while (current != head);
    printf("\n");
}