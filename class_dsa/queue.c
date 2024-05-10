#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initialize(Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

bool isFull(Queue* queue) {
    return (queue->rear == MAX_SIZE - 1);
}

bool isEmpty(Queue* queue) {
    return (queue->front == -1);
}

void enqueue(Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
    }
    queue->rear++;
    queue->data[queue->rear] = item;
}

void dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    if (queue->front == queue->rear) {
        initialize(queue);
    } else {
        queue->front++;
    }
}

int front(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. No front element.\n");
        return -1;
    }
    return queue->data[queue->front];
}

int peek(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. No peek element.\n");
        return -1;
    }
    return queue->data[queue->rear];
}

int main() {
    Queue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("Front element: %d\n", front(&queue));
    printf("Peek element: %d\n", peek(&queue));

    dequeue(&queue);

    printf("Front element after dequeue: %d\n", front(&queue));
    printf("Peek element after dequeue: %d\n", peek(&queue));

    return 0;
}
