#include <stdio.h>
#include <string.h>
void main()
{
    char m[5],s[5];
    printf("Enter your passing status in Mathematics");
    scanf("%s",&m);
    printf("Enter your passing status in science");
    scanf("%s",&s);
    if(s=="pass" || m=="pass") printf(45);
    else if(s=="pass") printf("%d",15);
    else if(m=="pass") printf("%d",15);
    else printf("%s", "failure");
}