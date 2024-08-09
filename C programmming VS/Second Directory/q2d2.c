#include<stdio.h>
int s,i,j;
void utm(int mat[s][s], int s)
{
    for (i=0;i<s;i++){
        for(j=0;j<s;j++){
            if(i>j)printf(" \t");
            else printf("%d\t",mat[i][j]);
	    }
        printf("\n");   
    }
}
void main()
{
    int z=0;
    printf("Enter size of square matrix: ");
    scanf("%d",&s);
    int arr[s][s];
    printf("Enter array elements:\n");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]!=0)++z;
        }
    }
    printf("Nonzero elements: %d\n", z);
    printf("Upper triangular matrix:\n");
    utm(arr,s);
}