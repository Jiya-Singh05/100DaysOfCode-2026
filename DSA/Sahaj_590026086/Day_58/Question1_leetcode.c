#include <stdio.h>
#include <stdlib.h>

// LeetCode 222: Count Complete Tree Nodes
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
int countNodes(struct TreeNode* root);
