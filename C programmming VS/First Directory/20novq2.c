#include<stdio.h>
struct Book
{
    char bname[20];
    int pages;
    char author[20];
    float price;
}
b[4]={
    {"Tempest",500,"Shakespeare",350},
    {"Hamlet",400,"Shakespeare",250},
    {"Gulmohar",300,"Indian",150},
    {"Pied piper",200,"european",50}
};

void main()
{
    for(int i=0;i<4;i++)
    {
         printf("Book Number %d \n",i+1);
         printf("Book Name %s \n",b[i].bname);
         printf("Book Author %s \n",b[i].author);
}
}