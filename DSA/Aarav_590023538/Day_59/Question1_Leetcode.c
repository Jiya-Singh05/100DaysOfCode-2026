#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Check Completeness of a Binary Tree (LeetCode #958)
TreeNode* newNode(int v);
TreeNode* buildTree(int *vals, int n);
int isCompleteTree(TreeNode* root);
