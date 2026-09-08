#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1, j = strlen(b) - 1, carry = 0;
    int maxLen = (i > j ? i : j) + 3;
    char* res = (char*)malloc(maxLen);
    int k = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        res[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }
    res[k] = '\0';
    for (int l = 0; l < k / 2; l++) {
        char t = res[l]; res[l] = res[k - 1 - l]; res[k - 1 - l] = t;
    }
    return res;
}
