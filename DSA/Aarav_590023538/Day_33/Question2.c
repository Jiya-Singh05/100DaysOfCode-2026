#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

// Stack to store strings
char stack[MAX][MAX];
int top = -1;

// Push a string onto the stack
void push(char str[]) {
    strcpy(stack[++top], str);
}

// Pop a string from the stack
char* pop() {
    return stack[top--];
}
