#include<stdio.h>
void main()
{
    int n,n1;
    char c='A';
    scanf("%d",&n);
    n1=n;
    for(int r=1;r<=n;++r)
    {
        for(int s=1;s<n1;++s)printf(" ");
        for(int i=1;i<=r;++i)
        {
            printf("%c",c);
            ++c;
        }
        c=c-2;
        for(int j=1;j<r;++j)
        {
            printf("%c",c);
            --c;
        }
        printf("\n");
        --n1;
        c='A';
    }
}