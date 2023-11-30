#include<stdio.h>
void main()
{
  int a,b,c,d,great,and;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  printf("c && d is %d",c&&d); 
  printf("\na > b is %d",a>b);
  printf("\na || b is %d",a||b);
  printf("\na>b + c&&d is %d",a>b+c&&d);
  great=a>b;
  and=c&&d;
  printf("\ngreat + and = %d",great+and);
}