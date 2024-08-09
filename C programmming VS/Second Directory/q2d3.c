#include <stdio.h>
#define MAX_SIZE 100

void convertToSparse(int matrix[][MAX_SIZE], int rows, int cols)
{
    int sparse[MAX_SIZE][3];
    int sparseIndex = 1;

    sparse[0][0] = rows;
    sparse[0][1] = cols;
    sparse[0][2] = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[sparseIndex][0] = i;
                sparse[sparseIndex][1] = j;
                sparse[sparseIndex][2] = matrix[i][j];
                sparse[0][2]++;
                sparseIndex++;
            }
        }
    }

    printf("Sparse Matrix (3-tuple format):\n");
    for (int i = 0; i <= sparse[0][2]; i++)
    {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the matrix elements one by one:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("enter row %d and column %d : ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    convertToSparse(matrix, rows, cols);

    return 0;
}