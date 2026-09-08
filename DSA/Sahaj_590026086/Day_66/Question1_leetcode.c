#include <stdio.h>
#include <stdlib.h>

// LeetCode 701: Insert into a Binary Search Tree
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
struct TreeNode* insertIntoBST(struct TreeNode* root, int val);
