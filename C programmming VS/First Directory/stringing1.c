#include<stdio.h>
void main()
{
 char s[52];
 gets(s);
 int n=strlen(s);
 printf("%d\n", n);
 puts(s);   
}