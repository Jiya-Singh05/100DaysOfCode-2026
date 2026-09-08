#include <stdio.h>
#include <stdlib.h>

// LeetCode 1382: Balance a Binary Search Tree
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
struct TreeNode* balanceBST(struct TreeNode* root);
