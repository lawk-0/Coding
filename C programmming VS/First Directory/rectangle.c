#include<stdio.h>
int main()
{ 
int r,c;
printf("Enter row and coloumn :\n");   
scanf("%d%d",&r,&c);
for(int i=1;i<=r;i++)
{        
for(int j=1;j<=c;j++)
{
if(j==c || j==1 || i==1 || i==r)
{
printf("* ");
}
else
printf("  ");
}
printf("\n");
}
return 0;    
}