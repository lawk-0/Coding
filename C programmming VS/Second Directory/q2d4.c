//wap to sparse matrix three tuple format find out the matrix
#include<stdio.h>
int n,i,j,fe,se,te;
void sparsetn(int spr[te][3],int *n)
{
    int arr[spr[0][0]][spr[0][1]];
    for(i=0;i<spr[0][0];++i)for(j=0;j<spr[0][1];++j)arr[i][j]=0;
    for(i=1;i<*n;i++)arr[spr[i][0]][spr[i][1]]=spr[i][2];
    printf("\nThe requested sparse matrix is: \n");
    for(i=0;i<spr[0][0];i++){
        for(j=0;j<spr[0][1];j++)printf("%d ",arr[i][j]);
        printf("\n");
    }
}
void main()
{
    printf("Enter the 3 tupled sparse matrix row by row:\n");
    scanf("%d %d %d",&fe, &se, &te);
    int spr[++te][3];
    spr[0][0]=fe;
    spr[0][1]=se;
    spr[0][2]=te;
    for(i=1; i<te; i++)for (j=0; j<3;++j)scanf("%d",&spr[i][j]);
    sparsetn(spr,&te);
}