#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter the order of the square matrices  :-");scanf("%d",&n);
    int a[n][n];
    printf("Enter the values of the matrix A :-\n");
    for(int i=0; i<n; i++)for(int j=0; j<n; j++){
        printf("Enter the element [%d][%d] :",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    int b[n][n];
    int mul[n][n];
    printf("Enter the values of the matrix B :-\n");
    for(int i=0; i<n; i++)for(int j=0; j<n; j++){
        printf("Enter the element [%d][%d] :",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                sum+=a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
            sum=0;
        }
    }
    printf("The multiplication of the matrices is \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}