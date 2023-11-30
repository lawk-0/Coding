#include<stdio.h>
void main()
{
    int g;
    printf("Input marks");
    scanf("%d",&g);
    if(g>=90)printf("O grade");
    else if(g>=80)printf("E grade");
    else if(g>=70)printf("A grade");
    else if(g>=60)printf("B grade");
    else if(g>=50)printf("C grade");
    else if(g>=40)printf("D grade");
    else printf("F grade");
}