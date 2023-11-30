#include<stdio.h>
void adddiff(int* a, int* b)
{
int s,d;        
printf("The sum is %d \n",*a+*b);
printf("The differnce is %d \n",*b-*a);
s=*a+*b;
d=*b-*a;
*a=s;
*b=d;
printf("The sum is %d \n",*a);
printf("The differnce is %d \n",*b);
}
void main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    adddiff(&x,&y);
    printf("%d %d",x,y);
}