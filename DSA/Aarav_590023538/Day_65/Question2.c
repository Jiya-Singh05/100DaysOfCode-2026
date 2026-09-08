#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// The Thermostat
TreeNode* newNode(int v);
TreeNode* build(int *tree, int n, int pos);
int closestValue(TreeNode* root, double target);
