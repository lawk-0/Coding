#include<stdio.h>
int main()
{
    printf("Enter a number \n");
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i<=n ;i++)
    {
        for(int l = n-i ; l >= 0;l--)
            printf(" ");
        for(int j = 1 ; j <= i ; j++)
            printf("%d",j);
        for(int k = i-1;k > 0 ; k--)
            printf("%d",k);
        printf("\n");
    }
    
}