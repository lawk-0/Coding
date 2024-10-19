#include<stdio.h>

typedef struct node{
    int info;
    struct node *next;
}node;

node* create_node(data){
    node *newnode =(node*)malloc(sizeof(node));
    newnode->info =data;
    newnode->next =NULL;
    return newnode;
}

void delete_beg(node **start){
    if(*start == NULL)return ;
    else (*start)->next = *start;
}

void delete_end(node **start){
    if(*start == NULL) return ;
    else if((*start)->next == NULL) *start=NULL;
    for(node *p = *start; p != NULL; p = p->next){
        if(p->next->next == NULL){
            p->next=NULL;
            return;
        }
    }
}

void search(node **start,int ele){
    int find=1;
    for(node *p = *start; p != NULL;){
        if(p->info == ele) printf("found at position %d:",find);
        ++find;
    }
}

void reverse(node **start){
    for(node *p=start;p!=NULL;p=p->next){
        
    }
}

void delete_pos(node **start, int pos){
    int find=0;
    if(*start == NULL) return ;
    for(node *p = *start; p != NULL; p = p->next){
        if(find+1 == pos)p->next=p->next->next;
    }
}



void main()
{
    node *head=NULL,*q;
    int n,data;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&data);
        node *temp=create_node(data);
        temp->next=head;
        head=temp;        
    }
    while (head != NULL) {
        printf(" %d ", head->info);
        head = head->next;
        if(head!=NULL)printf("->");
    }
    printf("\n");
}