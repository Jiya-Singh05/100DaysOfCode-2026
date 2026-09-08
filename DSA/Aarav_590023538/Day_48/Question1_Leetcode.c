#include <stdio.h>
#include <stdlib.h>

int k; // column index to sort by (global for the qsort comparator)

int compareRows(const void *a, const void *b) {
    const int *rowA = *(const int **)a;
    const int *rowB = *(const int **)b;
    return rowB[k] - rowA[k]; // descending order on column k
}

void sortTheStudents(int **score, int m, int n, int kk) {
    k = kk;
    qsort(score, m, sizeof(int *), compareRows);
}

static void printMatrix(int **mat, int m, int n) {
    printf("[");
    for (int i = 0; i < m; i++) {
        printf("[");
        for (int j = 0; j < n; j++) {
            printf("%d%s", mat[i][j], (j == n - 1) ? "" : ",");
        }
        printf("]%s", (i == m - 1) ? "" : ",");
    }
    printf("]\n");
}
