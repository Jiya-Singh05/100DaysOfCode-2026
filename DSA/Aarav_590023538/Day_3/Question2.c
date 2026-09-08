#include <stdio.h>

// Function to count the occurrences of the target element
int countOccurrences(int arr[], int n, int target)
{
    int count = 0;
    // Traverse the entire array
    for (int i = 0; i < n; i++)
    {
        // If the current element matches the target,
        // increase the count
        if (arr[i] == target)
        {
            count++;
        }
    }
    // Return the total count
    return count;
}
