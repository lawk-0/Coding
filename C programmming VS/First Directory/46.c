#include<stdio.h>
void rep(int* arr[])
{
    int n=sizeof(*arr)/sizeof(*arr[0]);
    int i,temp;
    for(i=0;i<(n/2);++i){
        temp=*arr[(n/2)-i];
        *arr[(n/2)-i]=*arr[i];
        *arr[i]=temp;
        }
}
void main()
{
    int i,n;
    printf("Size of array:");
    scanf("%d",&n); 
    int a[n];
    printf("Enter numbers");
    for(i=0;i<n;++i)scanf("%d",&a[i]);
    rep(&a);
    printf("The reversed\n");
    for(i=0;i<n;++i)printf("%d ",a[i]);
}