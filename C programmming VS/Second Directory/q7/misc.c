#include<stdio.h>
#define MAX 100
int queue[MAX];
int top=-1;
int rear=-1;
void Enqueue(int v){
    if(top==MAX){
        printf("Overflow\n");
        return;
    }
    if(rear==-1)rear=0;
    queue[++top]=v;
}

void Dequeue(){
    if(!(top<=rear))++rear;
    else{
        printf("Underflow!\n");
        return;
    }
    printf("Element deleted\n");
}

void IsEmpty(){
    if(top>=rear)printf("Empty!\n");
    else printf("Not empty!\n");
}

void IsFull(){
    if(top==MAX)printf("Full!\n");
    else printf("Not full!\n");
}

void Traverse(){
    for(int i=rear;i<=top;i++)printf(" %d ",queue[i]);
}
void main()
{
    int n,ele,d=0;
    printf("Enter the number of elements you want to enter in the queue: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&ele);
        Enqueue(ele);
    }
    printf("Main Menu\n1. Enqueue\n2. Dequeue\n3. IsEmpty\n4. IsFull\n5. Traverse\n6. Exit");
    while(d!=6){
        printf("\nEnter Option: ");
        scanf("%d",&d);
        switch(d){
            
            case 1:
            printf("Enter element to be pushed into the stack: ");
            scanf("%d",&ele);
            Enqueue(ele);
            break;

            case 2:
            Dequeue();
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