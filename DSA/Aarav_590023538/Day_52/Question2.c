#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Username Registration System
unsigned long hashString(const char* str);
Node* findNode(const char* username);
void insertNode(const char* username);
void registerUsername(const char* request, char* result);
void freeTable(void);
