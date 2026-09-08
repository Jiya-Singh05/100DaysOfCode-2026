#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Find Mode in Binary Search Tree (LeetCode #501)
TreeNode* newNode(int v);
TreeNode* buildTree(int *vals, int n);
void inorder(TreeNode* node);
void resetState(void);
void printModes(void);
