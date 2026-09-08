#include <stdio.h>
#include <stdlib.h>
int minCostRing(int n, int* costs) {
    int total = 0;
    for (int i = 0; i < n; i++) total += costs[i];
    return total;
}
