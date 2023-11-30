#include<stdio.h>
void main()
{
    int n=4;
    char c='V';
    float f=10.1;
    double d=3.22;
    int* n1=&n;
    char* c1=&c;
    float* f1=&f;
    double* d1=&d;
    printf("The size of int is %d\n",sizeof(n1));
    printf("The size of char is %d\n",sizeof(c1));
    printf("The size of float is %d\n",sizeof(f1));
    printf("The size of double is %d\n",sizeof(d1));
}