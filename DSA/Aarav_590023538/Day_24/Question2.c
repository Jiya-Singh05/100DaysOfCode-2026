#include <stdio.h>
#include <stdlib.h>

// Function to return the sorted squares of the array
void sortedSquares(int nums[], int n, int result[]) {
    int left = 0;
    int right = n - 1;
    int index = n - 1;

    // Compare absolute values from both ends
    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        // Place the larger square at the end of the result array
        if (leftSquare > rightSquare) {
            result[index] = leftSquare;
            left++;
        } else {
            result[index] = rightSquare;
            right--;
        }
        index--;
    }
}
