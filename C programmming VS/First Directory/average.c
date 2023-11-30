#include<stdio.h>
void main()
{
int a,b,c,d,e;
 printf("Enter the number of 1st subject: ");
 scanf("%d",&a);
 printf("Enter the number of 2nd subject: ");
 scanf("%d",&b);
 printf("Enter the number of 3rd subject: ");
 scanf("%d",&c); 
 printf("Enter the number of 4th subject: ");
 scanf("%d",&d);
 printf("Enter the number of 5th subject: ");
 scanf("%d",&e);
 float avg=(float)((a+b+c+d+e)/5.0);
 float per=(float)((a+b+c+d+e)/10.0);
 printf("The average is: %0.2f",avg);
 printf("\nThe percentage is: %0.2f",per);
 printf("%c",'%');
}


