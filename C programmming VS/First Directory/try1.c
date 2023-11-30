#include<stdio.h>
void main()
{
char i,j,k,n;
int n1,s;
scanf("%d",&n1);
n=n1+64;
for(i='A';i<=n;++i){
for(s=1;s<=n-i;++s)printf(" ");
for(j='A';j<=i;++j)printf("%c",j);
for(k=i-1;k>64;--k)printf("%c",k);
printf("\n");
}
}