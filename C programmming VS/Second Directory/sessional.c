#include<stdio.h>
#include<stdlib.h>

void reverse(int *arr,int k,int size)
{
    //int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=k;i<size;++i){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    for(int i=0;i<size;++i)printf("%d ",arr[i]);
}
void main()
{
    int n,k;
    printf("Enter size of array :");
    scanf("%d ",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter elements: ");
    for(int i=0;i<n;++i)scanf("%d",&arr[i]);
    
    printf("Enter value of k: ");
    scanf("%d",&k);
    reverse(arr,k,n);
}