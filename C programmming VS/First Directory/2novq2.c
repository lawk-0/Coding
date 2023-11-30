#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character ");
    scanf("%c",&a);
    if(a>='a' && a<='z')printf("Lower case");
    else if(a>='A' && a<='Z')printf("Upper case");
    else printf("Not a character");
}