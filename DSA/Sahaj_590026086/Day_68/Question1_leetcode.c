#include <stdio.h>
#include <stdlib.h>
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
void storeInorder(struct TreeNode* root, int* arr, int* sz) {
    if (!root) return;
    storeInorder(root->left, arr, sz);
    arr[(*sz)++] = root->val;
    storeInorder(root->right, arr, sz);
}
struct TreeNode* buildTree(int* arr, int start, int end) {
    if (start > end) return NULL;
    int mid = start + (end - start) / 2;
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = arr[mid];
    node->left = buildTree(arr, start, mid - 1);
    node->right = buildTree(arr, mid + 1, end);
    return node;
}
