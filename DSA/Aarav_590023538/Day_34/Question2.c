#include <stdio.h>
#include <stdlib.h>

// Maximum People Visible in a Line
int main() {
int arr[MAX], n;
    int stack[MAX], top = -1;
    int left[MAX], right[MAX];
    printf("Enter number of people: ");
    scanf("%d", &n);
    printf("Enter heights:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Find nearest greater or equal element on the left
    top = -1;
    for (int i = 0; i < n; i++) {
        // Remove all smaller heights
        while (top != -1 && arr[stack[top]] < arr[i])
            top--;
        // Store index of nearest greater/equal element
        if (top == -1)
            left[i] = -1;
        else
            left[i] = stack[top];
        // Push current index
        stack[++top] = i;
    }
    // Find nearest greater or equal element on the right
    top = -1;
    for (int i = n - 1; i >= 0; i--) {
    return 0;
}
