#include <stdio.h>
#include <stdlib.h>

// Fractional Knapsack Problem
typedef struct { long long value; long long weight; double ratio; } Item;
double fractionalKnapsack(long long* value, long long* weight, int n, long long capacity);
