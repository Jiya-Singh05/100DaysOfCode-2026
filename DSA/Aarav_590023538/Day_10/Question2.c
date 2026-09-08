#include <stdio.h>
#include <stdlib.h>

// Determine Gender
int main() {
char username[101];
    int freq[26] = {0}; // To store whether a character appeared or not
    int i, distinct = 0;
    // Input username
    scanf("%s", username);
    // Traverse the string
    for (i = 0; username[i] != '\0'; i++) {
        // If character is seen for the first time
        if (freq[username[i] - 'a'] == 0) {
    return 0;
}
