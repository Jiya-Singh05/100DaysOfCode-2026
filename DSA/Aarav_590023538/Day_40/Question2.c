#include <stdio.h>
#include <stdlib.h>

/* Returns a malloc'd array of length (n - k + 1) with the max of every
   window of size k. Caller must free the returned array. */
int* slidingWindowMax(int* temps, int n, int k, int* outSize) {
    int* result = malloc((n - k + 1) * sizeof(int));
    int* dq = malloc(n * sizeof(int)); /* stores indices, values decreasing */
    int head = 0, tail = 0;            /* deque occupies dq[head..tail-1] */
    int ri = 0;

    for (int i = 0; i < n; i++) {
        /* drop indices that fell out of the window */
        while (head < tail && dq[head] <= i - k) head++;

        /* drop indices whose values are <= current value */
        while (head < tail && temps[dq[tail - 1]] <= temps[i]) tail--;

        dq[tail++] = i;

        if (i >= k - 1) {
            result[ri++] = temps[dq[head]];
        }
    }

    free(dq);
    *outSize = ri;
    return result;
}

static void printArray(int* arr, int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : ", ");
    }
    printf("]\n");
}
