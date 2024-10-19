#include <stdio.h>
#include <stdlib.h>

#define MAX 5  

int queue[MAX];
int front = -1;
int rear = -1;


int isFull() {
    return rear == MAX - 1;
}

int isEmpty() {
    return front == -1 || front > rear;
}

void enqueue(int value) {
    // Check for queue overflow
    if (isFull()){
        printf("QUEUE OVERFLOW! Cannot insert %d\n", value);
        return;
    }
    else if (front == -1) front = 0;// Initialize front when the first element is enqueued
    queue[++rear] = value;
    printf("%d enqueued to queue.\n", value);
}

void dequeue() {
    // Check for queue underflow
    if (isEmpty())printf("QUEUE UNDERFLOW! No elements to dequeue.\n");
    else {
        printf("%d dequeued from queue.\n", queue[front++]);
        // Reset the queue when all elements are dequeued
        if (front > rear)front = rear = -1;
    }
}

void display() {
    if (isEmpty())printf("Queue is empty.\n");
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)printf("%d ", queue[i]);
        printf("\n");
    }
}


int main() {
    int choice, value;

   
    printf("\nQueue Operations Menu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Check if Queue is Full\n");
    printf("5. Check if Queue is Empty\n");
    printf("6. Exit\n");
    while (choice!=6) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                if (isFull())
                    printf("Queue is full.\n");
                else
                    printf("Queue is not full.\n");
                break;
            case 5:
                if (isEmpty())
                    printf("Queue is empty.\n");
                else
                    printf("Queue is not empty.\n");
                break;
            case 6:
                printf("Exited !");
                exit(0);     
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}