#include<stdio.h>
void grt(int *n1,int *n2)
{
    if(*n1>*n2)printf("%d is greater than %d \n",*n1,*n2);
    else if(*n1<*n2)printf("%d is smaller than %d \n",*n1,*n2);
    else printf("Both numbers are same \n");
}
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    grt(&a,&b);
}