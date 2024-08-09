#include<stdio.h>
void main()
{
    int age=22;
    int *ptr=&age;
    printf("%d is &age\n", &age);
    printf("%d is ptr\n", ptr);
    printf("%d is &ptr\n",&ptr);
    printf("%d is *ptr\n", *ptr);
    int _age=*ptr;
    printf("%d is _age=*ptr\n",_age);
}