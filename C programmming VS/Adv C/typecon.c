#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers \n");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("%d is the largest number \n",a);
}
else if(b>a)
{
printf("%d is the largest number \n",b);
}
if(b<10 && b>1)
{
printf("%d is smaller than 10 but greater than 1 \n",b);
}
if(a<10 && a>1)
{
printf("%d is smaller than 10 but greater than 1 \n",a);
}
return 0;
}