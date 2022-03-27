//
// Created by Joe Wu on 2022/3/27.
//

#ifndef ALGORITHM_C_STACKBYINTARRAY_H
#define ALGORITHM_C_STACKBYINTARRAY_H

typedef struct stackByIntArray st;

void createEmptyStack(st *s);
int isFull(st *s);
int isEmpty(st *s);
void push(st *s, int newitem);
void pop(st *s);
void printStack(st *s);
void doStackByIntArray();

#endif //ALGORITHM_C_STACKBYINTARRAY_H
