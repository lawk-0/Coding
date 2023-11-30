#include<stdio.h>
int main()
{
int a,b;
char c1,c2;
printf("Enter two numbers \n");
scanf("%d %d",&a,&b);
c1=(char)a;
c2=(char)b;
if(c1>='a'&& c1<='z' || c1>='A'&& c1<'Z')printf("%c is a letter not a number \n",c1);
if(c2>='a'&& c2<='z' || c2>='A' && c2<='Z')printf("%c is a letter not a number \n",c2);
else if(a>b)printf("%d is the largest number \n",a);
else if(b>a)printf("%d is the largest number \n",b);
if(b<10||b>1)printf("%d is smaller than 10 but greater than 1 \n",b);
if(a<10||a>1)printf("%d is smaller than 10 but greater than 1 \n",a);
return 0;
}