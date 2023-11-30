#include <stdio.h>
int printstar(int a, int b);
void main()
{
int r1,r2;
printf("Enter two numbers");
scanf("%d",&r1);
scanf("%d",&r2);
printstar(r1,r2);
}
int printstar(int a, int b){
    for(int i=1;i<=a;++i)
    {
        for(int j=1;j<=b;j++){
            printf("%c",'*');
        }
        printf("\n");
        --b;
        }
        return 0;
}
