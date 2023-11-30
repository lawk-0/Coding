#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *x,*y,sum;
    x=(int*)malloc(sizeof(int));
    y=(int*)malloc(sizeof(int));
    sum=*x+*y;
    printf("The sum is %d",sum);
}