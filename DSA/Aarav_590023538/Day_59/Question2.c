#include <stdio.h>
#include <stdlib.h>

// The Secret Passcodes
TreeNode* newNode(int v);
TreeNode* build(int *tree, int n, int idx);
int countPopcount(unsigned mask);
int countValidPaths(TreeNode* root, unsigned mask);
