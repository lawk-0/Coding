#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("You have entered %d as your age \n", age);
    if (age>=18)
    {
        printf("You can vote!");
        /* code */
    }
    else if(age<13){
        printf("you are not even a teenager!");
    }
    else{
        printf("You cannot vote!");
    }
    return 0;
}
