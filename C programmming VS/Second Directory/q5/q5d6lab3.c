//ADDITION OF TWO SPARSE MATRICES
//REPRESENTATION OF SPARSE MATRIX BY SINGLE LINKED LIST

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

start* addsparse(start *sparse1,start *sparse2){
    if (sparse1->rows != sparse2->rows || sparse1->columns != sparse2->columns) {
        printf("Sparse matrix addition not possible\n");
        return NULL;
    }

    start *s3 = (start *) malloc(sizeof(start));
    s3->rows = sparse1->rows;
    s3->columns = sparse1->columns;
    s3->values = 0;
    s3->address = NULL;

    node *q1 = sparse1->address;
    node *q2 = sparse2->address;

    while (q1 != NULL && q2 != NULL) {
        if (q1->row == q2->row && q1->col == q2->col) {
            node *newNode = (node *) malloc(sizeof(node));
            node *q3=NULL;
            newNode->row = q1->row;
            newNode->col = q1->col;
            newNode->info = q1->info + q2->info;
            for(q3=s3->address; q3->next!=NULL; q3=q3->next);
            q3->next=newNode;
            newNode->next = NULL;
            s3->values++;
            q1 = q1->next;
            q2 = q2->next;
        } else if (q1->row < q2->row || (q1->row == q2->row && q1->col < q2->col)) {
            node *newNode = (node *) malloc(sizeof(node));
            newNode->row = q1->row;
            newNode->col = q1->col;
            newNode->info = q1->info;
            node *q3=NULL;
            for(q3=s3->address; q3->next!=NULL; q3=q3->next);
            q3->next=newNode;
            newNode->next = NULL;
            s3->values++;
            q1 = q1->next;
        } else {
            node *newNode = (node *) malloc(sizeof(node));
            newNode->row = q2->row;
            newNode->col = q2->col;
            newNode->info = q2->info;
            node *q3=NULL;
            for(q3=s3->address; q3->next!=NULL; q3=q3->next);
            q3->next=newNode;
            s3->values++;
            q2 = q2->next;
        }
    }
     while (q2 != NULL) {
        node *newNode = (node *) malloc(sizeof(node));
        newNode->row = q2->row;
        newNode->col = q2->col;
        newNode->info = q2->info;

        // Insert newNode at the end of s3
        if (s3->address == NULL) {
            s3->address = newNode;
        } else {
            node *q3 = s3->address;
            while (q3->next != NULL) {
                q3 = q3->next;
            }
            q3->next = newNode;
        }
        newNode->next = NULL;
        s3->values++;
        q2 = q2->next;
    }
    return s3;
}

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
int main() {
    start *sparse1 = (start*)malloc(sizeof(start));
    printf("Enter sparse matrix 1 dimensions and values:\n");
    scanf("%d %d %d", &sparse1->rows, &sparse1->columns, &sparse1->values);

    node *q = NULL;
    for(int i = 0; i < sparse1->values; i++) {
        int row, column, value;
        scanf("%d %d %d", &row, &column, &value);
        if(i == 0) {
            sparse1->address = createnode(row, column, value);
            q = sparse1->address;
        } else {
            q->next = createnode(row, column, value);
            q = q->next;
        }
    }

    printf("Sparse matrix 1:\n");
    printf("%d\t%d\t%d\n", sparse1->rows, sparse1->columns, sparse1->values);
    q = sparse1->address;
    while(q != NULL) {
        printf("%d\t%d\t%d\n", q->row, q->col, q->info);
        q = q->next;
    }

    start *sparse2 = (start*)malloc(sizeof(start));
    printf("Enter sparse matrix 2 dimensions and values:\n");
    scanf("%d %d %d", &sparse2->rows, &sparse2->columns, &sparse2->values);

    q = NULL;
    for(int i = 0; i < sparse2->values; i++) {
        int row, column, value;
        scanf("%d %d %d", &row, &column, &value);
        if(i == 0) {
            sparse2->address = createnode(row, column, value);
            q = sparse2->address;
        } else {
            q->next = createnode(row, column, value);
            q = q->next;
        }
    }

    printf("Sparse matrix 2:\n");
    printf("%d\t%d\t%d\n", sparse2->rows, sparse2->columns, sparse2->values);
    q = sparse2->address;
    while(q != NULL) {
        printf("%d\t%d\t%d\n", q->row, q->col, q->info);
        q = q->next;
    }

    start *s3 = addsparse(sparse1, sparse2);
    printf("Resultant sparse matrix:\n");
    printf("%d\t%d\t%d\n", s3->rows, s3->columns, s3->values);
    q = s3->address;
    while(q != NULL) {
        printf("%d\t%d\t%d\n", q->row, q->col, q->info);
        q = q->next;
    }
    return 0;
}
