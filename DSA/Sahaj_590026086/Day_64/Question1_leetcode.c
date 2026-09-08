#include <stdio.h>
#include <stdlib.h>

// LeetCode 938: Range Sum of BST
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
int rangeSumBST(struct TreeNode* root, int low, int high);
