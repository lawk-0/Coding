#include<stdio.h>
#include<string.h>
struct emp
{
    char name[77];
    long Eno;
    float salary;/* data */
}s1,s2,s3;

void main()
{
 char name[56];
 struct emp e1={"Shubh Agnihotri",22032004,99900063.224};   
 struct emp e2={"Priyanka Jaiswal",26122004,10999999.8};
 struct emp e3={"Atharv Gupta"};
 struct emp e4={"Priyanshu Pandey"};
 e4.salary=23121009456.12;
 strcpy(name,"HelloJi");
 printf("%s's salary is %f\n",e2.name,e2.salary);
 printf("Someone's name is %s",name);
 printf("\n %s",e4.name);
}