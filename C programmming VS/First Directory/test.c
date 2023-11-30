#include<stdio.h>
void main()
{
    int a=10,b=15;
    b= printf("%d", --a - --b - --a + ++a - (a=++a) - --b);
}