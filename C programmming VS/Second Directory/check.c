#include <stdio.h>
void main()
{
    int a=5;
    int *ptr=&a;
    int *ptr2;
    ptr2=&a;
    printf("%d \n",ptr);
    printf("%u \n",ptr);
    printf("%u \n",ptr+1);
}