#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int minCost(int n, int* cuts, int cutsSize) {
    int m = cutsSize + 2;
    int points[m];

    points[0] = 0;
    points[m - 1] = n;

    for (int i = 0; i < cutsSize; i++)
        points[i + 1] = cuts[i];

    qsort(points, m, sizeof(int), compare);

    int dp[m][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            dp[i][j] = 0;
        }
    }

    for (int length = 2; length < m; length++) {
        for (int i = 0; i + length < m; i++) {
            int j = i + length;
            dp[i][j] = 1000000000;

            for (int k = i + 1; k < j; k++) {
                int cost = points[j] - points[i]
                         + dp[i][k]
                         + dp[k][j];

                if (cost < dp[i][j])
                    dp[i][j] = cost;
            }
        }
    }

    return dp[0][m - 1];
}