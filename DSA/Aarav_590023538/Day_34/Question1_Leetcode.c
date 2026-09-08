#include <stdio.h>
#include <stdlib.h>

// Implement Queue using Stacks (LeetCode #232)
MyQueue* myQueueCreate();
void myQueuePush(MyQueue* obj, int x);
int myQueuePop(MyQueue* obj);
int myQueuePeek(MyQueue* obj);
bool myQueueEmpty(MyQueue* obj);
void myQueueFree(MyQueue* obj);
