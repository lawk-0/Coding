/*
Switch case
1 Find out if the year is leap year ir not
*/
#include<stdio.h>
void main()
{
    int y;
    scanf("%d",&y);
    if(y%100==0){
        if(y%400)printf("Leap Year");
        else printf("Not a leap year");
    } 
    else if(y%4==0)printf("Leap Year");
    else printf("Not a leap year");
}