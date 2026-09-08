#include <stdio.h>
#include <stdlib.h>

// Number of Recent Calls (LeetCode #933)
void initQueue(Queue *q);
void enqueue(Queue *q, int x);
int dequeue(Queue *q);
int peekFront(Queue *q);
void recentCounterInit(RecentCounter *rc);
int recentCounterPing(RecentCounter *rc, int t);
