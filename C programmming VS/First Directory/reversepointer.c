#include<stdio.h>
#include<string.h>
void reverse(char name[]) 
{
    int i,j;
    for(i=0,j=strlen(name)-1;i<j;i++,j--)
    {
        char temp=*(i+name);
        *(i+name)=*(j+name);
        *(i+name)=temp;
    }

}
void main()
{
    char name[108];
    printf("Enter the name\n");
    gets(name);
    reverse(name);
    puts(name);
}