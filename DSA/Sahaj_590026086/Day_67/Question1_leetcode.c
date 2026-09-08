#include <stdio.h>
#include <stdlib.h>

// LeetCode 450: Delete Node in a BST
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
struct TreeNode* deleteNode(struct TreeNode* root, int key);
