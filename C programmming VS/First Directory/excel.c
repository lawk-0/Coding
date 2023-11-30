#include<stdio.h>
void main()
{
    int n,n1,d=1,i=0,j=0;
    printf("Enter a number ");
    scanf("%d",&n);
    n1=n;
    n+=26;
    while(n>=26)
    {
        d*=26;
        n%=d;
        ++i;
    }
    char a[i];
    while(j<i){
        a[j]='A';
        ++j;
    }
    printf("%d\n",i);
    printf("%d\n",d);
    printf("%s",a);
}