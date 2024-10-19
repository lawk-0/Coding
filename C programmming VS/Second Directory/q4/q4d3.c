#include <stdio.h>
#include <stdlib.h>

// Node structure for polynomial linked list
typedef struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(int coefficient, int exponent) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node to the list
void appendNode(Node** head, int coefficient, int exponent) {
    Node* newNode = createNode(coefficient, exponent);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to display the polynomial
void displayPolynomial(Node* head) {
    if (head == NULL) {
        printf("0\n");
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        if (temp->coefficient != 0) {
            printf("%d", temp->coefficient);
            if (temp->exponent != 0) {
                printf("x^%d", temp->exponent);
            }
            if (temp->next != NULL && temp->next->coefficient != 0) {
                printf(" + ");
            }
        }
        temp = temp->next;
    }
    printf("\n");
}

// Function to add two polynomials
Node* addPolynomials(Node* poly1, Node* poly2) {
    Node* result = NULL;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exponent > poly2->exponent) {
            appendNode(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        } else if (poly1->exponent < poly2->exponent) {
            appendNode(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        } else {
            int sumCoeff = poly1->coefficient + poly2->coefficient;
            appendNode(&result, sumCoeff, poly1->exponent);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    while (poly1 != NULL) {
        appendNode(&result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }

    while (poly2 != NULL) {
        appendNode(&result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }

    return result;
}

// Main function
int main() {
    Node *poly1 = NULL, *poly2 = NULL;
    int maxPower, coefficient;

    // Input for first polynomial
    printf("Polynomial-1:\n");
    printf("Enter the Maximum power of x: ");
    scanf("%d", &maxPower);
    for (int i = maxPower; i >= 0; i--) {
        printf("Enter the coefficient of degree %d: ", i);
        scanf("%d", &coefficient);
        appendNode(&poly1, coefficient, i);
    }

    // Input for second polynomial
    printf("Polynomial-2:\n");
    printf("Enter the Maximum power of x: ");
    scanf("%d", &maxPower);
    for (int i = maxPower; i >= 0; i--) {
        printf("Enter the coefficient of degree %d: ", i);
        scanf("%d", &coefficient);
        appendNode(&poly2, coefficient, i);
    }

    // Display the polynomials
    printf("Polynomial 1: ");
    displayPolynomial(poly1);
    printf("Polynomial 2: ");
    displayPolynomial(poly2);

    // Add the two polynomials
    Node* result = addPolynomials(poly1, poly2);
    printf("Resultant Polynomial after addition: ");
    displayPolynomial(result);

    return 0;
}