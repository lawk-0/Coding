#include<stdio.h>
void main()
{
    int a;
    printf("Type integer: ");
    scanf("%d",&a);
    int* poin=&a;
    int addr=&a;
    int *ptr=NULL;
    printf("The address 1 of integer is %d",poin);
    printf("\nThe address 2 of integer %d is %x",*poin,poin);
    printf("\nThe address is %x, right? ",&a);
    printf("\nThe address is %x, right? ",addr);
    printf("\nThe address is %p, right? ",addr);
    printf("%x",ptr);
}