#include<stdio.h>
void main()
{
    int n,i,j,sums=0;
    printf("Enter the size of matrix ");
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    printf("Enter the first matrix \n");
    for(i=0;i<n;++i)for(j=0;j<n;++j)scanf("%d",&a[i][j]);
    printf("Enter the second matrix \n");
    for(i=0;i<n;++i)for(j=0;j<n;++j)scanf("%d",&b[i][j]);
    int sum[n][n];
    printf("The sum of the matrices is \n");
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;++i)sums=sums+sum[i][i];
    printf("The sum of diagonals is %d\n",sums);
    int tran[n][n];
    for(i=0;i<n;++i)for(j=0;j<n;++j)tran[j][i]=a[i][j];  
    printf("The transpose of the first matrix is \n");
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            printf("%d ",tran[i][j]);
        }
        printf("\n");
    }
}         