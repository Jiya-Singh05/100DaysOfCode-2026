#include <stdio.h>
#include <stdlib.h>
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
int getLeftHeight(struct TreeNode* node) { int h = 0; while (node) { h++; node = node->left; } return h; }
int getRightHeight(struct TreeNode* node) { int h = 0; while (node) { h++; node = node->right; } return h; }
