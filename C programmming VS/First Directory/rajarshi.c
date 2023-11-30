#include<stdio.h>
void main()
{
    int n,i,d=1,s,j,c;
    printf("Enter height of triangle: ");
    scanf("%d",&n);
    c=n-2;
    for(i=1;i<=n+2;++i)printf("*");
    printf("\n");
    for(i=n-1;i>1;--i){
        for(j=1;j<=d;++j)printf(" ");
        printf("*");
        for(s=1;s<=c;++s)printf(" ");
        printf("*");
        c-=2;
        printf("\n");
        ++d;
    }
    for(i=1;i<n;++i)printf(" ");
    printf("*\n");
}