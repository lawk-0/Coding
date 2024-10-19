#include <stdio.h>
#include <stdlib.h>
// Function to add two polynomials
void addPolynomials(int *poly1, int *poly2, int *result, int degree) {
    for (int i = 0; i <= degree; i++) {
        result[i] = poly1[i] + poly2[i];
    }
}
// Function to print the polynomial
void printPolynomial(int *poly, int degree) {
    for (int i = degree; i >= 0; i--) {
        printf("%d", poly[i]);
        if (i != 0) {
            printf("x^%d", i);
            if (i > 0) {
                printf(" + ");
            }
        }
    }
    printf("\n");
}

int main() {
    int degree;

    printf("Enter maximum degree of x: ");
    scanf("%d", &degree);

    int *poly1 = (int *)malloc((degree + 1) * sizeof(int));
    int *poly2 = (int *)malloc((degree + 1) * sizeof(int));
    int *result = (int *)malloc((degree + 1) * sizeof(int));

    printf("Enter Polynomial-1 from lowest degree to highest degree: ");
    for (int i = 0; i <= degree; i++) {
        scanf("%d", &poly1[i]);
    }

    printf("Enter Polynomial-2: ");
    for (int i = 0; i <= degree; i++) {
        scanf("%d", &poly2[i]);
    }

    // Add the two polynomials
    addPolynomials(poly1, poly2, result, degree);

    // Print the result
    printf("Resultant Polynomial: ");
    printPolynomial(result, degree);

    // Free allocated memory
    free(poly1);
    free(poly2);
    free(result);

    return 0;
}