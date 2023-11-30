#include <stdio.h>
int main()
{
    int matrix[3][3]; 
    int i, j, sum = 0; 
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("The sum of the matrix is %d\n", sum);
    return 0;
}