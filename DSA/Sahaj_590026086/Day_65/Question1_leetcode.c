#include <stdio.h>
#include <stdlib.h>
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
void inorder(struct TreeNode* root, int* prev, int* count, int* maxCount, int* modes, int* modeCount, int pass) {
    if (!root) return;
    inorder(root->left, prev, count, maxCount, modes, modeCount, pass);
    if (*prev == root->val) (*count)++; else { *count = 1; *prev = root->val; }
    if (pass == 1) { if (*count > *maxCount) *maxCount = *count; }
    else { if (*count == *maxCount) modes[(*modeCount)++] = root->val; }
    inorder(root->right, prev, count, maxCount, modes, modeCount, pass);
}
