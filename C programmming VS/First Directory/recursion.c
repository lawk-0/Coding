#include <stdio.h>
int factorial(int h)
{
if(h==0 || h==1) return 1;
return (h*factorial(h-1));
}
void main()
{
int n1;
printf("Enter a number for factorial ");
scanf("%d",&n1);
int n2=factorial(n1);
printf("The factorial of the given number is %d",n2);
}
