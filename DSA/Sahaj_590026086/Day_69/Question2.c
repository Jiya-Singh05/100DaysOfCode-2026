#include <stdio.h>
#include <stdlib.h>
int canPartition(int* nums, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += nums[i];
    return sum % 2 == 0;
}
