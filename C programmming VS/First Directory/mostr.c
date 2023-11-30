#include<stdio.h>
void main()
{
    int n,i,j,c,max;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(i=0;i<n;++i)scanf("%d",&arr[i]);
    int b[n];
    for(i=0;i<n;++i){
        b[i]=0;
        for(j=0;j<n;++j)if(arr[j]==arr[i])++b[i];
    }
    c=0;
    max=b[c];
    for(i=0;i<n;++i){
        if(b[i]>max){
            max=b[i];
            c=i;
    }
}
printf("The most repeated element is %d at position %d, the repetition is %d times ",arr[c],c,b[c]);
}