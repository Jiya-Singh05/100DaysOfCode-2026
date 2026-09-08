#include <stdio.h>
#include <stdlib.h>

// Remove Spaces from String
int main() {
char str[1000];
    int i = 0, j = 0;
    // Read the complete string including spaces
    fgets(str, sizeof(str), stdin);
    // Traverse the string
    while (str[i] != '\0') {
        // Copy only non-space characters
        if (str[i] != ' ') {
            str[j] = str[i];
    return 0;
}
