#include <stdio.h>
#include <stdlib.h>

// Construct Binary Search Tree from Preorder Traversal (LeetCode #1008)
struct TreeNode* build(int* preorder, int* idx, int n, int lower, int upper);
struct TreeNode* bstFromPreorder(int* preorder, int n);
