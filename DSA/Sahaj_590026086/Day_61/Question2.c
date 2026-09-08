#include <stdio.h>
#include <stdlib.h>
int wizardMaster(int* powers, int n) {
    int maxP = powers[0];
    for (int i = 1; i < n; i++) if (powers[i] > maxP) maxP = powers[i];
    return maxP;
}
