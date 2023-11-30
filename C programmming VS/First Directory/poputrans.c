#include <stdio.h>
int main()
{
    int matrix[3][3]; 
    int tra[3][3];
    int i, j; 
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("At position (%d,%d): ",i+1,j+1);
            scanf("%d", &matrix[i][j]);
            tra[j][i]=matrix[i][j];
        }
    }

    printf("\nEnterd Array was : \n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j< 3; j++) 
        {
            printf("%d  ", matrix[i][j]);
            
        }
        printf("\n");
    }
    

    printf("\nTransposed Array was : \n");
    
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j< 3; j++) 
        {
            printf("%d  ", tra[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}