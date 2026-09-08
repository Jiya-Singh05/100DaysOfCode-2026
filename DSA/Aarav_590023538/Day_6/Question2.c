#include <stdio.h>
#include <stdlib.h>

// Union of Two Sorted Arrays
int main() {
int a[100], b[100], c[200];
    int n, m;
    int i, j, k = 0, found;
    // Input size of first array
    scanf("%d", &n);
    // Input elements of first array
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    // Input size of second array
    scanf("%d", &m);
    // Input elements of second array
    for (i = 0; i < m; i++)
        scanf("%d", &b[i]);
    // Add unique elements from the first array to the union array
    for (i = 0; i < n; i++) {
        found = 0;
        // Check if the element already exists in the union array
        for (j = 0; j < k; j++) {
            if (a[i] == c[j]) {
                found = 1;
                break;
            }
        }
        // If not found, add it to the union array
        if (!found)
            c[k++] = a[i];
    }
    return 0;
}
