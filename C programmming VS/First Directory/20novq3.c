#include<stdio.h>
struct Student{
char Name[20];
int roll;
long int number;
float cgpa;
}b1[4]={
{"SHUBHAM",223053,9832357563,9.3},
{"BODHI",223052,9832357554,8.3},
{"KUNAL",223057,9832357563,9.6},
{"RAJARSHRI",223043,9832357563,7.9},
};
void main(){
for(int i=0;i<4;i++){
 printf("Roll Number %d \n",b1[i].roll);
 printf("Name %s \n",b1[i].Name);
 printf("CGPA %.3f \n",b1[i].cgpa);
}
}