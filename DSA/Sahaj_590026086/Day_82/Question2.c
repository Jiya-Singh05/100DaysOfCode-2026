#include <stdio.h>
#include <stdlib.h>
int turnOffRightmostSetBit(int n) {
    return n & (n - 1);
}
