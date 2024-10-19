#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int top=-1;
int stack[MAX];

void Push(int i)
{
    if(top+1!=100)stack[++top]=i;
    else printf("Stack overflow");
}

void Pop()
{
    if(top!=-1)printf("%d deleted from stack ",stack[top--]);
    else printf("Stack underflow");
}

void IsEmpty()
{
    if(top==-1) printf("Empty stack");
    else printf("Stack not empty");
}

void IsFull()
{
    if(top==MAX)printf("Full stack");
}

void Traverse()
{
    for(int i=top; i>=0; --i)printf("%d ",stack[i]);
}

void main()
{
    int n,ele,d=0;
    printf("Enter the number of elements you want to enter in the stack: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&ele);
        Push(ele);
    }
    printf("Main Menu\n1. Push\n2. Pop\n3. IsEmpty\n4. IsFull\n5. Traverse\n6. Exit");
    while(d!=6){
        printf("\nEnter Option: ");
        scanf("%d",&d);
        switch(d){
            
            case 1:
            printf("Enter element to be pushed into the stack: ");
            scanf("%d",&ele);
            Push(ele);
            break;

            case 2:
            Pop();
            break;

            case 3:
            IsEmpty();
            break;

            case 4:
            IsFull();
            break;

            case 5:
            Traverse();
            break;

            case 6:
            d=6;
            break;

            default:
            d=0;
        }
        
    }
}