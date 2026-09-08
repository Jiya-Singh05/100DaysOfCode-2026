#include <stdio.h>
#include <stdlib.h>
typedef struct { long long value; long long weight; double ratio; } Item;
int compareItem(const void* a, const void* b) {
    double r1 = ((Item*)a)->ratio;
    double r2 = ((Item*)b)->ratio;
    if (r2 > r1) return 1;
    if (r2 < r1) return -1;
    return 0;
}
