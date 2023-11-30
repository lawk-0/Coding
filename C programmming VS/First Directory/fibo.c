#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==2) return n;
    else return fib(n-1)+fib(n-2);
}
void main()
{
int a;
scanf("%d", &a);
printf("%d",fib(a));
}