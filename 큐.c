#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front;
    Node *rear;
    int count; 
} Queue;

// Initialization function
void initQueue(Queue *queue) {
    queue->front = queue->rear = NULL;
    queue->count = 0; 
}

// Check if the queue is empty
int isEmpty(Queue *queue) {
    return queue->count == 0; // Checks if the queue is empty
}

// Function to enqueue data
void enqueue(Queue *queue, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;   

    if (isEmpty(queue)) {
        queue->front = newNode; // If queue is empty, front is the new node
    } else {
        queue->rear->next = newNode; // Link new node at the end
    }
    queue->rear = newNode; // Rear points to the new node
    queue->count++;
}

// Function to dequeue data
int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Error: Queue is empty\n");
        return 0; // Returning 0 when the queue is empty; consider using a different error handling mechanism
    }
    
    Node *ptr = queue->front;
    int data = ptr->data; // Data to return
    queue->front = ptr->next; // Move front to the next node
    free(ptr); // Free the old front node
    queue->count--;
    
    return data;
}

int main() {
    Queue queue;
    
    initQueue(&queue); // Initialize the queue 
    for (int i = 0; i <= 10; i++) {
        enqueue(&queue, i); // Enqueue elements 0 to 10
    }
    
    while (!isEmpty(&queue)) {
        printf("%d ", dequeue(&queue)); // Correctly dequeue and print each element
    }
    printf("\n");
    
    return 0;
}
