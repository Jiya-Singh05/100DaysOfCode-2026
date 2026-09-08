#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// LeetCode 958: Check Completeness of a Binary Tree
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
bool isCompleteTree(struct TreeNode* root);
