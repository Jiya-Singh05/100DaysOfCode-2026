#include <stdio.h>

// Function to count subarrays whose maximum element
// is less than or equal to the given limit
int countSubarrays(int arr[], int n, int limit) {
    int count = 0;
    int length = 0;

    for (int i = 0; i < n; i++) {
        // If the current element is within the limit,
        // increase the current valid segment length
        if (arr[i] <= limit) {
            length++;
        } else {
            // Otherwise, start a new segment
            length = 0;
        }
        // Add the number of valid subarrays
        // ending at the current index
        count += length;
    }

    return count;
}
