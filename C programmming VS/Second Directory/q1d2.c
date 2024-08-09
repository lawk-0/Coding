#include<stdio.h>
#include<stdlib.h>
int isprime(int a){
     int i;
    for(i=2;i<=a/2; i++)  
    { 
        if (a%i!=0) 
            continue; 
        else
            return 1; 
    } 
    return 0; 
}
void main()
{
   int s,sum = 0;
   printf("Enter the size of array: ");
   scanf("%d", &s);
   int *ptr=(int*)malloc(s*sizeof(int));
   printf("Enter array elements: ");
   for(int i=0; i<s; i++)scanf("%d", (ptr+i));
   for(int i=0; i<s; i++){
    if(!isprime(*(ptr+i)))sum+=*(ptr+i);
    
   }
   printf("Sum =%d", sum);
}
