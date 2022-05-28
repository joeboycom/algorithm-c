//
// Created by Joe Wu on 2022/3/27.
//

// Circular Queue implementation in C

#include <stdio.h>
#include "queueByCircular.h"
#define SIZE 5

int items[SIZE], front, rear;

// Check if the queue is full
int isFullCircular() {
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
    return 0;
}

// Check if the queue is empty
int isEmptyCircular() {
    if (front == -1) return 1;
    return 0;
}

// Adding an element
void enQueueCircular(int element) {
    if (isFullCircular())
        printf("\n Queue is full!! \n");
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\n Inserted -> %d", element);
    }
}

// Removing an element
int deQueueCircular() {
    int element;
    if (isEmptyCircular()) {
        printf("\n Queue is empty !! \n");
        return (-1);
    } else {
        element = items[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        }
            // Q has only one element, so we reset the
            // queue after dequeing it. ?
        else {
            front = (front + 1) % SIZE;
        }
        printf("\n Deleted element -> %d \n", element);
        return (element);
    }
}

// Display the queue
void displayCircular() {
    int i;
    if (isEmptyCircular())
        printf(" \n Empty Queue\n");
    else {
        printf("\n Front -> %d ", front);
        printf("\n Items -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE) {
            printf("%d ", items[i]);
        }
        printf("%d ", items[i]);
        printf("\n Rear -> %d \n", rear);
    }
}

void doQueueCircular() {
    front = -1;
    rear = -1;
    
    // Fails because front = -1
    deQueueCircular();

    enQueueCircular(1);
    enQueueCircular(2);
    enQueueCircular(3);
    enQueueCircular(4);
    enQueueCircular(5);

    // Fails to enqueue because front == 0 && rear == SIZE - 1
    enQueueCircular(6);

    displayCircular();
    deQueueCircular();

    displayCircular();

    enQueueCircular(7);
    displayCircular();

    // Fails to enqueue because front == rear + 1
    enQueueCircular(8);

    printf("====================\n");
}


