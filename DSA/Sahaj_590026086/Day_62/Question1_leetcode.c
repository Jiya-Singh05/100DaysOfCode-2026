#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// LeetCode 2331: Evaluate Boolean Binary Tree
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
bool evaluateTree(struct TreeNode* root);
