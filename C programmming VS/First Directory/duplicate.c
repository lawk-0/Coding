#include<stdio.h>
void main()
{
    int i,j,k,n,size;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    size=n;
    printf("Enter elements\n");
    for(i=0;i<n;++i)scanf("%d",&a[i]);
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            if(a[j]==a[i]){
                for(k=j;k<n-1;++k)a[k]=a[k+1];
                --size;
            }

        }

        }
        for(i=0;i<=size;++i)printf("%d ",a[i]);
    }