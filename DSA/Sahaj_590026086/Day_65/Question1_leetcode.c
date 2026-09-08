#include <stdio.h>
#include <stdlib.h>

// LeetCode 501: Find Mode in Binary Search Tree
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
int* findMode(struct TreeNode* root, int* returnSize);
