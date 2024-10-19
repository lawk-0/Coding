#include <stdio.h>
#include <stdlib.h>
// Function to transpose a sparse matrix and sort the result
int** transposeAndSortSparseMatrix(int **mat, int nonZeroElements) {
    int rows = mat[0][0];
    int cols = mat[0][1];

    // Allocate memory for transposed matrix
    int **transposed = (int**)malloc((nonZeroElements + 1) * sizeof(int*));
    for (int i = 0; i <= nonZeroElements; i++) {
        transposed[i] = (int*)malloc(3 * sizeof(int));
    }

    // Set dimensions for transposed matrix
    transposed[0][0] = cols;
    transposed[0][1] = rows;
    transposed[0][2] = nonZeroElements;

    // Swap row and column indices for each non-zero element
    for (int i = 1; i <= nonZeroElements; i++) {
        transposed[i][0] = mat[i][1];
        transposed[i][1] = mat[i][0];
        transposed[i][2] = mat[i][2];
    }

    // Sort the transposed matrix based on row and then column
    for (int i = 1; i <= nonZeroElements - 1; i++) {
        for (int j = 1; j <= nonZeroElements - i; j++) {
            if (transposed[j][0] > transposed[j+1][0] || 
                (transposed[j][0] == transposed[j+1][0] && transposed[j][1] > transposed[j+1][1])) {
                // Swap rows
                int temp[3];
                temp[0] = transposed[j][0];
                temp[1] = transposed[j][1];
                temp[2] = transposed[j][2];

                transposed[j][0] = transposed[j+1][0];
                transposed[j][1] = transposed[j+1][1];
                transposed[j][2] = transposed[j+1][2];

                transposed[j+1][0] = temp[0];
                transposed[j+1][1] = temp[1];
                transposed[j+1][2] = temp[2];
            }
        }
    }

    return transposed;
}

int main() {
    int rows, cols, nonZeroElements;

    printf("Enter sparse matrix in 3-tuple format:\n");
    scanf("%d %d %d", &rows, &cols, &nonZeroElements);

    // Allocate memory for the sparse matrix
    int **matrix = (int**)malloc((nonZeroElements + 1) * sizeof(int*));
    for (int i = 0; i <= nonZeroElements; i++) {
        matrix[i] = (int*)malloc(3 * sizeof(int));
    }

    // Read the sparse matrix
    matrix[0][0] = rows;
    matrix[0][1] = cols;
    matrix[0][2] = nonZeroElements;

    for (int i = 1; i <= nonZeroElements; i++) {
        scanf("%d %d %d", &matrix[i][0], &matrix[i][1], &matrix[i][2]);
    }

    // Transpose and sort the matrix
    int **transposedMatrix = transposeAndSortSparseMatrix(matrix, nonZeroElements);

    // Print the transposed matrix
    printf("Transpose of sparse matrix:\nR   C  Element\n");
    for (int i = 0; i <= nonZeroElements; i++) {
        printf("%d   %d   %d\n", transposedMatrix[i][0], transposedMatrix[i][1], transposedMatrix[i][2]);
    }

    // Free allocated memory
    for (int i = 0; i <= nonZeroElements; i++) {
        free(matrix[i]);
        free(transposedMatrix[i]);
    }
    free(matrix);
    free(transposedMatrix);

    return 0;
}