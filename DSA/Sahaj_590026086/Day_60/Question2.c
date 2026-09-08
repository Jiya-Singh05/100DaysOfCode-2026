#include <stdio.h>
#include <stdlib.h>
int maxSubarraySum(int* arr, int n) {
    int max_so_far = arr[0], curr_max = arr[0];
    for (int i = 1; i < n; i++) {
        curr_max = (arr[i] > curr_max + arr[i]) ? arr[i] : curr_max + arr[i];
        if (curr_max > max_so_far) max_so_far = curr_max;
    }
    return max_so_far;
}
