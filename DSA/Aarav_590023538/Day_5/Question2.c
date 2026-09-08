#include <stdio.h>
#include <stdbool.h>

// Function to sort an array using Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to check whether two arrays are equal
bool areEqual(int a[], int b[], int n) {
    // Sort both arrays
    bubbleSort(a, n);
    bubbleSort(b, n);
    // Compare corresponding elements
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
