#include <stdio.h>
#include <stdlib.h>

// Implement Stack using Queues (LeetCode #225)
void initQueue(Queue *q);
void enqueue(Queue *q, int x);
int dequeue(Queue *q);
void myStackInit(MyStack *st);
void myStackPush(MyStack *st, int x);
int myStackPop(MyStack *st);
int myStackTop(MyStack *st);
int myStackEmpty(MyStack *st);
