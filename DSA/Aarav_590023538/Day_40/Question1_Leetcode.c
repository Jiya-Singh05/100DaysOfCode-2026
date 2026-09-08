#include <stdio.h>
#include <stdlib.h>

// Design Front Middle Back Queue
FrontMiddleBackQueue* fmbqCreate();
static Node* newNode(int val);
void fmbqPushFront(FrontMiddleBackQueue* q, int val);
void fmbqPushBack(FrontMiddleBackQueue* q, int val);
static Node* getNodeAt(FrontMiddleBackQueue* q, int index);
void fmbqPushMiddle(FrontMiddleBackQueue* q, int val);
int fmbqPopFront(FrontMiddleBackQueue* q);
int fmbqPopBack(FrontMiddleBackQueue* q);
int fmbqPopMiddle(FrontMiddleBackQueue* q);
void fmbqFree(FrontMiddleBackQueue* q);
