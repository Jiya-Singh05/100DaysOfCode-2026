#include <stdio.h>
#include <stdlib.h>
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
int helper(struct TreeNode* root, int isLeft) {
    if (!root) return 0;
    if (!root->left && !root->right) return isLeft ? root->val : 0;
    return helper(root->left, 1) + helper(root->right, 0);
}
