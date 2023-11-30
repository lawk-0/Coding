#include<stdio.h>
#include<string.h>
void main()
{
    char s1[64],s2[64],s3[129];
    printf("Enter string 1:");
    gets(s1);
    printf("Enter string 2:");
    gets(s2);
    puts(strcat(s1,s2));
    printf("New string 1 is %s\n",s1);
    printf("New string 2 is %s\n",s2);
    printf("The length of string 1 is %d\n",strlen(s1));
    printf("The reversed of string 2 is %s\n",strrev(s2));
    strcpy(s3,s2);
    printf("The copied string is %s\n",s3);


}