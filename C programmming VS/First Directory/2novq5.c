#include<stdio.h>
#include<string.h>
void main()
{
    char a[108];
    char b[108];
    int n;
    printf("Enter a string ");
    gets(a);
    printf("Enter another string ");
    gets(b);
    printf("Enter limiting value ");
    scanf("%d",&n);
    strcat(a,b);
    printf("The result string is ");
    puts(a);
    strncat(a,b,n);
    puts(a);
}