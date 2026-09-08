#include <stdio.h>
#include <stdlib.h>

// Highest Temperature in Every Time Window
int* slidingWindowMax(int* temps, int n, int k, int* outSize);
static void printArray(int* arr, int n);
