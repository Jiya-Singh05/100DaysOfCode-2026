#include <stdio.h>
#include <stdlib.h>

// Sort the Students by Their Kth Score (LeetCode #2545)
int compareRows(const void *a, const void *b);
void sortTheStudents(int **score, int m, int n, int kk);
static void printMatrix(int **mat, int m, int n);
