#include <stdio.h>
#include <stdlib.h>

// The Corporate Merger (Merge Two Trees)
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2);
