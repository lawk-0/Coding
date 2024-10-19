#include<stdio.h>
#include<stdlib.h>


typedef struct node{
    int value;
    struct node* next;
}node;

node* start;

node* createnode(int value)
{
    node* q = malloc(sizeof(struct node));
    q->value = value;
    q->next = NULL;
    return q;
}

void Push(int info){
    node* q;
    q=createnode(info);
    q->next=start;
    start=q;
}

void Pop(){
    if(start==NULL){
        printf("Underflow");
        return;
    }
    else{
        node* q;
        q=start;
        start=start->next;
        free(q);
    }
}

void Traverse(){
    node* q=start;
    while(q!=NULL){
        printf("%d",q->value);
        q=q->next;
        if(q!=NULL)printf(" -> ");
    }

}

void IsEmpty(){
    if(start==NULL)printf("Empty");
    else printf("Not empty");
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
    printf("Main Menu\n1. Push\n2. Pop\n3. IsEmpty\n4.Traverse\n5. Exit");
    while(d!=5){
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
            Traverse();
            break;

            case 5:
            d=5;
            break;

            default:
            d=0;
        }
        
    }   
}