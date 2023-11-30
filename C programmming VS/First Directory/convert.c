#include<stdio.h>
void main()
{
    int a;
    printf("Enter the amount in paisa:");
    scanf("%d",&a);
    printf("%d paisa = %d Rupee and %d paisa",a,a/100,a%100);
}