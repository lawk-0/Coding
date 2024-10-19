#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node *next;
} node;

void reverse(node **start){
    
    node *prev = NULL;
    node *current = *start;
    node *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *start = prev;
}

node* createnode(int n){
    node *q = (node*) malloc(sizeof(node));
    if (q == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // or handle error as needed
    }
    q->info = n;
    q->next = NULL;
    return q;
}

int main()
{
    node *start=NULL;
    node *q;
    int n,value;
    printf("How many values do you want to enter?\n");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
    printf("Enter value\n");
    scanf("%d",&value);
    if (start == NULL) {
    start = createnode(value);
    q = start;
    } else {
    for(q=start; q->next!=NULL; q=q->next);
    q->next = createnode(value);
    q = q->next;
    }
    printf("Inserted %d\n",q->info);
    q->next=NULL;
    }
    printf("The linked list is:\n");
    for(q=start; q!=NULL; q=q->next)printf("%d ",q->info);
    reverse(&start);
    printf("\nThe reversed linked list is\n");
    for(q=start; q!=NULL; q=q->next)printf("%d ",q->info);
    return 0;
}