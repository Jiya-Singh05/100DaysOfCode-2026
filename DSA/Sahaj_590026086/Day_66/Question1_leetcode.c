#include <stdio.h>
#include <stdlib.h>
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
struct TreeNode* createNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val; node->left = node->right = NULL;
    return node;
}
