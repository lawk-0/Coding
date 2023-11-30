#include<stdio.h>
void main()
{
    int a[]={10,20,30,40,50,60};
    int i,*p;
    p=a;
    for(i=0;i<5;i++)printf("\n%d",p[i]);
    return 0;
}
/*
int main()
{
    printf("Enter elements: ");
    for(int i=0;i<5;++i)scanf("%d",data+i);
    printf("You entered: \n");
    for(int i=0;i<5;++i)printf("%d\n",*(data+i));
    return 0;       
}
*/