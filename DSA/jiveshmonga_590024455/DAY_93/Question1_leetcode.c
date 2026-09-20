#include <stdlib.h>

int* countBits(int n, int* returnSize) {
    int* ans = malloc((n + 1) * sizeof(int));

    *returnSize = n + 1;

    for (int i = 0; i <= n; i++) {
        int num = i;
        int count = 0;

        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }

        ans[i] = count;
    }

    return ans;
}