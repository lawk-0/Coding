#include<stdio.h>
struct Student
{
   int ID;
   float marks;
   char fav[56];
}s1,s2,s3;
// or leave the semicolon and write "struct Student s1,s2,s3;" here
#include<stdio.h>
int main()
{
    struct Student tt;
    tt.ID=24;
    tt.marks=56.4;
    tt.fav[22]="Hello Shubh, my world";
    return 0;
}