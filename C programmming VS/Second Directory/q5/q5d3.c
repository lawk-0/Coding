#include <stdio.h>
#include <stdlib.h>

// Define a struct for the linked list node
typedef struct Node {
    int row;
    int col;
    int value;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int row, int col, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->row = row;
    newNode->col = col;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end
void insertNode(Node** head, int row, int col, int value) {
    Node* newNode = createNode(row, col, value);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display the sparse matrix in 3-tuple format
void displaySparseMatrix(Node* head, int totalRows, int totalCols) {
    printf("\nsparse matrix in 3-tuple format\n");
    
    // Count the non-zero elements
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    // Print the header info: number of rows, columns, and non-zero elements
    printf("%d   %d   %d\n", totalRows, totalCols, count);

    // Print each non-zero element in the list
    temp = head;
    while (temp != NULL) {
        printf("%d   %d   %d\n", temp->row, temp->col, temp->value);
        temp = temp->next;
    }
}

int main() {
    int rows, cols;

    printf("Enter size of the sparse matrix: ");
    scanf("%d %d", &rows, &cols);

    Node* head = NULL;

    printf("Enter elements of sparse matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value;
            scanf("%d", &value);
            if (value != 0) {
                insertNode(&head, i, j, value);
            }
        }
    }

    displaySparseMatrix(head, rows, cols);

    // Free the allocated memory
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}