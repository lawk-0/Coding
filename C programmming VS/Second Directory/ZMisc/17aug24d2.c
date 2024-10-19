#include<stdio.h>

typedef struct node {
    int info;
    struct Node* next;
} node;

insert_aft_ele(node **start, int data, int aft){
    if(*start==NULL)return;
    node *q;
    node *temp=(node*)malloc(sizeof(node));
    for(q=*start; q->info!=aft; q=q->next){
        if(q==NULL)return;
        temp->next=q->next;
        q->next=temp;
    }
}