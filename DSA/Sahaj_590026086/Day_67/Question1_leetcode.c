#include <stdio.h>
#include <stdlib.h>
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
struct TreeNode* getMin(struct TreeNode* node) {
    while (node->left) node = node->left;
    return node;
}
