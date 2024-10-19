#include<stdio.h>

typedef struct node {
    int info;
    struct Node* next;
} node;

delete_end(node **start)
{
    node *q,*prev;
    if(*start==NULL)return;
    else if(*start->next==NULL){
        q=*start;
        *start=NULL;
        free(q);
    }
    else{ 
        for(q=*start; q->next!=NULL; prev=q; q=q->next);
        prev->next=NULL;
        free(q);
    }

}