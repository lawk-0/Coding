#include<stdio.h>
void main()
{
    int n,a=0,b=1,temp;
    printf("Enter a number of items of the fibonacci series:\n");
    scanf("%d",&n);
    while(n--){
        printf("%d ",a);
        temp=a;
        a+=b;
        b=temp;
    }
}