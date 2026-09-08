#include <stdio.h>

// Function to rotate the array to the right by k steps
void rotateArray(int arr[], int n, int k)
{
    // If k is greater than array size, reduce unnecessary rotations
    k = k % n;
    // Rotate the array one step at a time
    for (int i = 0; i < k; i++)
    {
        // Store the last element
        int last = arr[n - 1];
        // Shift all elements one position to the right
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        // Place the last element at the beginning
        arr[0] = last;
    }
}
