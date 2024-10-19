#include <stdio.h>
#include <stdlib.h>
int** addSparseMatrices(int **mat1, int **mat2) {
    int r1=mat1[0][0];
    int c1=mat1[0][1];
    int ele1=mat1[0][2];
    int r2=mat2[0][0];
    int c2=mat2[0][1];
    int ele2=mat2[0][2];
    if (r1!=r2 || c1!=c2) {
        printf("Matrices dimensions do not match!\n");
        return NULL;
    }
    int **result=(int**)malloc((ele1+ele2+1)*sizeof(int*));
    for(int i=0;i<ele1+ele2+1;i++) {
        result[i]=(int*)malloc(3*sizeof(int));
    }
    result[0][0]=r1;
    result[0][1]=c1;
    int k=1;
    int i=1,j=1;
    while (i<=ele1 && j<=ele2) {
        if (mat1[i][0] < mat2[j][0] || (mat1[i][0] == mat2[j][0] && mat1[i][1] < mat2[j][1])) {
            // mat1 element comes first
            result[k][0] = mat1[i][0];
            result[k][1] = mat1[i][1];
            result[k][2] = mat1[i][2];
            i++;
        } else if (mat2[j][0] < mat1[i][0] || (mat2[j][0] == mat1[i][0] && mat2[j][1] < mat1[i][1])) {
            // mat2 element comes first
            result[k][0] = mat2[j][0];
            result[k][1] = mat2[j][1];
            result[k][2] = mat2[j][2];
            j++;
        } else {
            // Same row and column, add the values
            result[k][0] = mat1[i][0];
            result[k][1] = mat1[i][1];
            result[k][2] = mat1[i][2] + mat2[j][2];
            i++;
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i <= ele1) {
        result[k][0] = mat1[i][0];
        result[k][1] = mat1[i][1];
        result[k][2] = mat1[i][2];
        i++;
        k++;
    }
    while (j <= ele2) {
        result[k][0] = mat2[j][0];
        result[k][1] = mat2[j][1];
        result[k][2] = mat2[j][2];
        j++;
        k++;
    }
    
    result[0][2] = k - 1; // Update the count of non-zero elements
    return result;
}
void main() {
    int r, c, ele1, ele2;
    printf("Enter sparse matrix-1 in 3-tuple format:\n");
    scanf("%d %d %d", &r, &c, &ele1);
    int **mat1 = (int**)malloc((ele1 + 1) * sizeof(int*));
    for (int i = 0; i <= ele1; i++) {
        mat1[i] = (int*)malloc(3 * sizeof(int));
    }
    
    // Fill matrix 1
    mat1[0][0] = r;
    mat1[0][1] = c;
    mat1[0][2] = ele1;

    for (int i = 1; i <= ele1; i++) {
        scanf("%d %d %d", &mat1[i][0], &mat1[i][1], &mat1[i][2]);
    }
    
    printf("Enter sparse matrix-2 in 3-tuple format:\n");
    scanf("%d %d %d", &r, &c, &ele2);
    
    int **mat2 = (int**)malloc((ele2 + 1) * sizeof(int*));
    for (int i = 0; i <= ele2; i++) {
        mat2[i] = (int*)malloc(3 * sizeof(int));
    }
    
    // Fill matrix 2
    mat2[0][0] =r;
    mat2[0][1] =c;
    mat2[0][2] =ele2;
    for (int i = 1; i <= ele2; i++) {
        scanf("%d %d %d", &mat2[i][0], &mat2[i][1], &mat2[i][2]);
    }

    // Add the matrices
    int **result = addSparseMatrices(mat1, mat2);
    
    // Check if addition was successful
    if (result != NULL) {
        printf("Resultant matrix after addition:\nR   C  Element\n");
        for (int i = 0; i <= result[0][2]; i++) {
            printf("%d   %d   %d\n", result[i][0], result[i][1], result[i][2]);
        }
    }

    // Free allocated memory
    for (int i = 0; i <= ele1; i++) {
        free(mat1[i]);
    }
    free(mat1);
    
    for (int i = 0; i <= ele2; i++) {
        free(mat2[i]);
    }
    free(mat2);

    if (result != NULL) {
        for (int i = 0; i <= result[0][2]; i++) {
            free(result[i]);
        }
        free(result);
    }
}