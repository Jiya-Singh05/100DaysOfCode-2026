#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool hasEulerTrail(int* degrees, int n) {
    int oddCount = 0;
    for (int i = 0; i < n; i++) if (degrees[i] % 2 != 0) oddCount++;
    return oddCount == 0 || oddCount == 2;
}
