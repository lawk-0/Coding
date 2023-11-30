#include<stdio.h>
#include<string.h>
void main()
{
    char s1[108];
    char s2[108];
    printf("Enter a string: ");
    gets(s1);
    printf("Enter another string: ");
    gets(s2);
    int n=strcmp(s1,s2);
    if(n>0)printf("string 1 is higher by %d",n);
    else if(n<0)printf("string 2 is higher by %d",n);
    else printf("Both strings are equal by %d",n);    
}