#include <stdio.h>
#include <stdbool.h>

// Function to check if a pair with the target sum exists
bool hasPairWithTarget(int arr[], int size, int target) {
    // Initialize two pointers
    int left = 0;
    int right = size - 1;

    // Continue until the pointers meet
    while (left < right) {
        int sum = arr[left] + arr[right];

        // Pair found
        if (sum == target) {
            return true;
        }
        // If sum is smaller, move the left pointer forward
        if (sum < target) {
            left++;
        }
        // If sum is larger, move the right pointer backward
        else {
            right--;
        }
    }

    // No valid pair found
    return false;
}
