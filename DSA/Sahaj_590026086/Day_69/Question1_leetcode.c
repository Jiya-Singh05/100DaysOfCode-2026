#include <stdio.h>
#include <stdlib.h>
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
struct TreeNode* build(int* preorder, int n, int* idx, int bound) {
    if (*idx >= n || preorder[*idx] > bound) return NULL;
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = preorder[(*idx)++];
    root->left = build(preorder, n, idx, root->val);
    root->right = build(preorder, n, idx, bound);
    return root;
}
