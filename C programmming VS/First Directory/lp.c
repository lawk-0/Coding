#include<stdio.h>
void main()
{
    int i,s,n,c=1,d,j;
    printf("Enter height of diamond from the mid ");
    scanf("%d",&n);
    for(i=1;i<n;++i)printf(" ");
    printf("*\n");
    d=n;
    for(i=1;i<n;++i){
        --d;
        for(j=d;j>1;--j)printf(" ");
        printf("*");
        for(s=1;s<=c;++s)printf(" ");
        printf("*");
        c+=2;
        printf("\n");
    }
    c-=4;
    for(i=n-1;i>1;--i){
        ++d;
        for(j=1;j<d;++j)printf(" ");
        printf("*");
        for(s=1;s<=c;++s)printf(" ");
        printf("*");
        c-=2;
        printf("\n");
    }
    for(i=1;i<n;++i)printf(" ");
    printf("*\n");
}
