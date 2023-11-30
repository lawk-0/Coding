#include<stdio.h>
void main()
{
int arr[10] = {3, 0, 7, 1, 2, 8, 9, 2, 12, 9};
int x,y,z;
x= ++arr[2];
y= arr[2]++;
z= arr[x++];
printf("%d %d %d", x, y, z);
}