#include<stdio.h>
#include<stdlib.h>
struct myarray{
    int total_size;
    int used_size;
    int *ptr;
};
void create_array(struct myarray *a, int tsize, int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr=(int *)malloc(tsize*sizeof(int));
}
void show_array(struct myarray *a){
    for(int i=0 ; i<a->used_size ; i++)printf("%d\n",(a->ptr)[i]);
}
void setvalue(struct myarray *a){
    int n;
    for(int i=0 ; i<a->used_size ; i++){
        printf("Enter value: ");
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
}
void main(){
    struct myarray arr;
    int a,b;
    printf("Enter total size and used size: ");
    scanf("%d %d",&a,&b);
    create_array(&arr,a,b);
    setvalue(&arr);
    show_array(&arr);
}