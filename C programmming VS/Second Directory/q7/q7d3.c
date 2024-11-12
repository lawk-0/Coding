#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maximum size for array

typedef struct {
    int front;
    int rear;
    int size;
    int arr[MAX];
} CircularQueue;

// Function to initialize the queue
void initializeQueue(CircularQueue* q, int size) {
    q->front = -1;
    q->rear = -1;
    q->size = size;
}

// Function to check if the queue is empty
int isEmpty(CircularQueue* q) {
    return q->front == -1;
}

// Function to check if the queue is full
int isFull(CircularQueue* q) {
    return (q->rear + 1) % q->size == q->front;
}

// Function to enqueue an element
void enqueue(CircularQueue* q, int element) {
    if (isFull(q)) {
        printf("Queue is full! Cannot enqueue.\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % q->size;
    q->arr[q->rear] = element;
    printf("Element %d enqueued.\n", element);
}

// Function to dequeue an element
void dequeue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty! Cannot dequeue.\n");
        return;
    }
    printf("Element %d dequeued.\n", q->arr[q->front]);
    if (q->front == q->rear) {
        // Reset the queue after last element is dequeued
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % q->size;
    }
}

// Function to traverse and display the queue
void traverse(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }
    printf("CQueue: ");
    int i = q->front;
    do {
        printf("%d ", q->arr[i]);
        i = (i + 1) % q->size;
    } while (i != (q->rear + 1) % q->size);
    printf("\n");
}

int main() {
    CircularQueue q;
    int size, choice, element;

    printf("Enter Queue size: ");
    scanf("%d", &size);

    if (size > MAX) {
        printf("Size exceeds maximum limit (%d).\n", MAX);
        return 1;
    }

    initializeQueue(&q, size);

    while (1) {
        printf("\nMain Menu\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. IsEmpty\n");
        printf("4. IsFull\n");
        printf("5. Traverse\n");
        printf("6. Exit\n");
        printf("Enter option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &element);
                enqueue(&q, element);
                break;
            case 2:
                dequeue(&q);
                break;
            case 3:
                printf("Queue Empty: %s\n", isEmpty(&q) ? "True" : "False");
                break;
            case 4:
                printf("Queue Full: %s\n", isFull(&q) ? "True" : "False");
                break;
            case 5:
                traverse(&q);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid option! Please try again.\n");
        }
    }

    return 0;
}