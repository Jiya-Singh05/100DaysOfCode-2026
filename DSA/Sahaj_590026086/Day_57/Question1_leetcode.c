#include <stdio.h>
#include <stdlib.h>

// LeetCode 404: Sum of Left Leaves
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
int sumOfLeftLeaves(struct TreeNode* root);
