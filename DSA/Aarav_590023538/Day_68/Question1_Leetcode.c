#include <stdio.h>
#include <stdlib.h>

// Balance a Binary Search Tree (LeetCode #1382)
void inorder(struct TreeNode* root, int* arr, int* idx);
struct TreeNode* buildBalanced(int* arr, int left, int right);
struct TreeNode* balanceBST(struct TreeNode* root);
