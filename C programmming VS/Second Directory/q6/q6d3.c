
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    char value;
    struct node *next;
}stack;

stack* start=NULL;


stack* createnode(char value)
{
    stack* q = malloc(sizeof(struct node));
    q->value = value;
    q->next = NULL;
    return q;
}

void Push(char info){
    stack* q;
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
        stack* q;
        q=start;
        start=start->next;
        free(q);
    }
}

void Traverse(){
    stack* q=start;
    while(q!=NULL){
        printf("%c",q->value);
        q=q->next;
    }

}

void infixtopostfix{
    stack* q=start;
    while(q!=NULL){
        if(q->value=='('){
            q=q->next;
            while(q->value!=')'){
                if((q->value>=65 && q->value <=90) || (q->value>=97 && q->value<=122))Pop();
                else 
            }
        }
    }
}

void main()
{
    char str;
    printf("Enter infix expression ");
    while(1){
        scanf("%c",str);
        if(str==NULL)break;
        else Push(str);
    }

}
*/


//Here's a C program that converts an infix expression to a postfix expression using a stack:



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void convertInfixToPostfix(char *infix, char *postfix) {
    int i, j = 0;
    char temp;

    for (i = 0; i < strlen(infix); i++) {
        if (isalpha(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            push(infix[i]);
        } else if (infix[i] == ')') {
            while ((temp = pop()) != '(') {
                postfix[j++] = temp;
            }
        } else {
            while (top != -1 && precedence(stack[top]) >= precedence(infix[i])) {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
    }

    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    convertInfixToPostfix(infix, postfix);

    printf("Postfix: %s\n", postfix);

    return 0;
}


/*
How it works:

1. Reads the infix expression from the user.
2. Uses a stack to store operators.
3. Iterates through the infix expression:

    - If an alphabet character, adds it to the postfix expression.
    - If an opening parenthesis (, pushes it onto the stack.
    - If a closing parenthesis ), pops operators from the stack and adds them to the postfix expression until finding the matching (.
    - If an operator, pops operators with higher or equal precedence from the stack and adds them to the postfix expression, then pushes the current operator onto the stack.
4. After iterating through the infix expression, pops any remaining operators from the stack and adds them to the postfix expression.
5. Prints the resulting postfix expression.


Example usage:


Enter infix expression: (a+b)/c*d-e^f
Postfix: ab+c/d*ef^-
*/