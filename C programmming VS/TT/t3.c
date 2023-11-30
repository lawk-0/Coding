#include<stdio.h>
int factorial(int n1);
int natural(int n2);
void main()
{
    int n;
    scanf("%d",&n);
    int fac=factorial(n);
    int nat=natural(fac);
    printf("The factorial of the number is %d and the sum of natural numbers till it is %d",fac,nat);
}
int factorial(int n1)
{
    if(n1==1)return 1;
    else return(n1*factorial(n1-1));
}
int natural(int n2)
{
    if(n2==0)return 0;
    else return(n2+natural(n2-1));
}