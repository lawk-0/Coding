#include <stdio.h>
void main()
{
    float a=4;
    int b=(int)a;
    test:
    printf("\n type it four times");
    --b;
    if(b!=0)goto test;
}