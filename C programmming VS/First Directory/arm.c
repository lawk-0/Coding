#include<stdio.h>
void main()
{
    int n,sum=0;
    scanf("%d",&n);
    int n1=n;
    while(n>0)
    {
        sum+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    if(sum==n1)printf("The given number is Armstrong");
    else printf("The given number is not Armstrong");
}