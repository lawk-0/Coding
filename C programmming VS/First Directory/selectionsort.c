#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        printf("Enter the  element number %d:",i+1);
        scanf("%d",(a+i));
    }
    int min;
    for(i=0;i<n-1;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
            if(a[min]>a[j]) {
                min= j;
            }
        }
        if(min!=i)
        {
            temp=*(a+i);
            *(a+i)=*(a+min);
            *(a+min)=temp;
        }
    }
    printf("Sorted Array:\n");
    for(int i = 0; i < n; i++)  {
        printf("%d\n",*(a+i));
    }
    return 0;
}