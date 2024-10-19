#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int row;
    int col;
    int info;
    struct node *next;
}node;

typedef struct spr{
    int rows;
    int columns;
    int values;//non zero
    node *address;
}start; 

node* createnode(int row, int col, int value){
    node *q = (node*) malloc(sizeof(node));
    if (q == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // or handle error as needed
    }
    q->info = value;
    q->row = row;
    q->col = col;
    q->next = NULL;
    return q;
}

int main()
{
    start *sparse=(start*)malloc(sizeof(start));
    printf("Start entering the sparse matrix in three tuple format\n");
    scanf("%d",&sparse->rows);
    scanf("%d",&sparse->columns);
    scanf("%d",&sparse->values);
    node *q=NULL;
    for(int i=0; i<sparse->values; i++){
    int row,column,value;
    scanf("%d %d %d",&row,&column,&value);
    if(i==0){
    sparse->address=createnode(row,column,value);
    q=sparse->address;
    } else {
    q->next=createnode(row,column,value);
    q=q->next;
    }
    }
    printf("Sparse matrix:\n");
    printf(" %d\t%d\t%d\n",sparse->rows,sparse->columns,sparse->values);
    q=sparse->address;
    while(q!=NULL){
        printf("%d\t%d\t%d\n",q->row,q->col,q->info);
        q=q->next;
    }
}