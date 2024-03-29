//
// Created by Joe Wu on 2022/3/27.
//

// Queue implementation in C

#include <stdio.h>
#include "queueByIntArray.h"

#define SIZE 5

int items[SIZE], front, rear;

void enQueue(int);
void deQueue();
void display();

void enQueue(int value) {
    if (rear == SIZE - 1)
        printf("\nQueue is Full!!");
    else {
        if (front == -1)
            front = 0;
        rear++;
        items[rear] = value;
        printf("\nInserted -> %d", value);
    }
}

void deQueue() {
    if (front == -1)
        printf("\nQueue is Empty!!");
    else {
        printf("\nDeleted : %d", items[front]);
        front++;
        if (front > rear)
            front = rear = -1;
    }
}

// Function to print the queue
void display() {
    if (rear == -1)
        printf("\nQueue is Empty!!!");
    else {
        printf("\nQueue elements are:\n");
        for (int i = front; i <= rear; i++)
            printf("%d  ", items[i]);
    }
    printf("\n");
}

void doQueueByIntArray() {
    front = -1;
    rear = -1;

    //deQueue is not possible on empty queue
    deQueue();

    //enQueue 5 elements
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    // 6th element can't be added to because the queue is full
    enQueue(6);

    display();

    //deQueue removes element entered first i.e. 1
    deQueue();

    //Now we have just 4 elements
    display();

    printf("====================\n");
}