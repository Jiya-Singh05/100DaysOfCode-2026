#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// The Balance Spectrum (Balanced Binary Tree)
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
bool isBalanced(struct TreeNode* root);
