#include<stdio.h>
int c=0;
typedef struct node{
    int value;
    struct node* next;
}node;

void trav(node *start){
    node *q;
    for(q=start; q!=NULL; q=q->next)
    printf("%d", q->value);
}

void inspos(node *start, int data, int pos){
    node *q=(node*)malloc(sizeof(node));
    q->next=start;
    for(int i=1; i!=pos || q->next!=NULL; ++i){
        q->value=data;
        q=q->next;
    }
}

void count(node *start){
    node *q;
    int count=0;
    q->next=start;
    while(q->next==NULL){
        q=q->next;
        ++count;
    }
    c=count;
    printf("count = %d",count);
}

void delete(node *start, int pos){
    node *q;
    int p=0;
    for(q=start; q!=NULL; q=q->next,++pos){
        if(p==pos){
            q->next=start
        }
    }

}

void main()
{
    
}