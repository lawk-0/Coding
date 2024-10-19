#include<stdio.h>
int n,i,ele,p,arr[100];
void insert(int arr[], int *n)
{
    printf("Element to insert: ");
    scanf("%d",&ele);
    printf("Enter position: ");
    scanf("%d",&p);
    ++*n;        
    for(i=*n-1;i>p;--i){
        arr[i]=arr[i-1];
    }
        arr[p]=ele;
        printf("Element inserted ");
}

void delete(int arr[], int *n)
{
    printf("Position of element to be deleted: ");
    scanf("%d",&p);
    if(p<*n-1){
        for(i=p;i<*n-1;i++)arr[i]=arr[i+1];
        --*n;
    }
    else if(p==*n-1)--*n;
    else printf("Position of element is not found");
}

void linears(int arr[], int *n)
{
    printf("Element to be searched: ");
    scanf("%d",&ele);        
    for(i=0;i<*n;++i)if(arr[i]==ele)break;
    if(i<*n)printf("Element found at index%d",i);        
    else printf("Element not found");
}

void traverse(int arr[], int *n)
{
    for(i=0;i<*n;++i)printf("%d\t",arr[i]);
}

void main()
{
    int t=0;
    printf("Enter size n:");
    scanf("%d",&n);
    printf("\tEnter array elements:");
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    printf("\t**MENU**\n");
    printf("\t1.Insert\n\t2.Delete\n\t3.Linear Search\n\t4.Traverse\n\t5.Exit");
    while(t!=5){
        printf("\n\tEnter Option:");
        scanf("%d",&t);
        switch(t){
        
        case 1:
        insert(arr,&n);
        break;

        case 2:
        delete(arr,&n);
        break;

        case 3:
        linears(arr,&n);
        break;

        case 4:
        traverse(arr,&n);
        break;   
        }
    }
}