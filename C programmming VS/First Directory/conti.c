#include <stdio.h>
void main()
{
    int i;
    for(i=0;i<10;++i){
        printf("\nBefore continue");
        if(i%2==0)continue;
        printf("\nAfter continue %d",i);
    }
}