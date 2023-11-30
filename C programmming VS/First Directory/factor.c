#include<stdio.h>
void main()
{
    int n1,n,i=1;
    printf("n=");
    scanf("%d",&n);
    printf("\nThe factors are \n");
    n1=n/2;
    while(i<=n1)
    {
        if(n%i==0)printf("%d ",i);
        ++i;
    }
    printf("%d",n);
}