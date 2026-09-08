#include <stdio.h>
#include <stdlib.h>

// Find the Largest Element in an Array
int main() {
// Variable to store the size of the array
    int n;
    // Take the size of the array as input
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Declare the array
    int arr[n];
    // Take array elements as input from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    return 0;
}
