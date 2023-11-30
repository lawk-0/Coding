#include<stdio.h>
void main()
{
    int sum=0,data[5];
    printf("Enter elements: ");
    for(int i=0;i<5;++i){
        scanf("%d",data+i);
        sum+=*(data+i);
    }
    int avg=sum/5;
    printf("You entered: \n");
    for(int i=0;i<5;++i)printf("%d\n",*(data+i));
    printf("Average is: %d\n",avg);
    printf("The sum is: %d\n",sum);
    return 0;      
}