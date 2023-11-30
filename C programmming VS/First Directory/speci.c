#include<stdio.h>
#define pi 3.14 // constant
int main()
{
    int a=5;
    const float b=5.987; // constant means you cannot change the value later
    printf( "Hello World\n"); /* code */
    printf("The value of integer is %d and the value of float is %0.2f",a,b);
    printf("\n");
    printf("%.3lf", pi);
    return 0;
} 
/*
%c  character
%d  integer
%f  float
%l  long
%lf double
%Lf long double
%s string
*/