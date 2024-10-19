#include<stdio.h>

typedef struct node {
    int info;
    struct Node* next;
} node;

delete_beg(node **start)
{
    node *q = *start;
    if(*start==NULL)return;
    else{
        *start=*start->next;
        free(q);
    }

    
}

void main()
{
    
}