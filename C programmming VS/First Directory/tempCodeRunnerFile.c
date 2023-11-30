#include<stdio.h>
void main()
{
    int n;
    printf("Enter the order of the square matrices  :-");scanf("%d",&n);
    int a[n][n];
    printf("Enter the values of the matrix A :-\n");
    for(int i=0; i<n; i++)for(int j=0; j<n; j++){
        printf("Enter the element [%d][%d] :",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    int b[n][n];
    int sum[n][n];
    printf("Enter the values of the matrix B :-\n");
    for(int i=0; i<n; i++)for(int j=0; j<n; j++){
        printf("Enter the element [%d][%d] :",i+1,j+1);
        scanf("%d",&b[i][j]);
        sum[i][j]=a[i][j]+b[i][j];
    }
    printf("The sum of the matrices is \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}