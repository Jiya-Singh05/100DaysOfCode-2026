#include <stdio.h>
#include <stdlib.h>

// LeetCode 1008: Construct BST from Preorder Traversal
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
struct TreeNode* bstFromPreorder(int* preorder, int preorderSize);
