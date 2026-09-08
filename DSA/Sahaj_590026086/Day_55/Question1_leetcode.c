#include <stdio.h>
#include <stdlib.h>

typedef struct { int val; int index; } Element;
int compareVal(const void* a, const void* b) { return ((Element*)b)->val - ((Element*)a)->val; }
int compareIndex(const void* a, const void* b) { return ((Element*)a)->index - ((Element*)b)->index; }
