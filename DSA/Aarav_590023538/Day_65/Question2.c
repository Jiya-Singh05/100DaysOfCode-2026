#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left, *right;
} TreeNode;

TreeNode* newNode(int v) {
    TreeNode* n = malloc(sizeof(TreeNode));
    n->val = v;
    n->left = n->right = NULL;
    return n;
}

/* 1-indexed heap-style build: node at position i (1-indexed) has children
   at positions 2i and 2i+1. tree[] is stored 0-indexed, so position i maps
   to array index i-1. -1 or an out-of-range position means missing. */
TreeNode* build(int *tree, int n, int pos) {
    if (pos > n || tree[pos - 1] == -1) return NULL;

    TreeNode* node = newNode(tree[pos - 1]);
    node->left = build(tree, n, 2 * pos);
    node->right = build(tree, n, 2 * pos + 1);
    return node;
}

int closestValue(TreeNode* root, double target) {
    int best = root->val;
    double bestDiff = fabs(root->val - target);

    TreeNode* cur = root;
    while (cur) {
        double diff = fabs(cur->val - target);
        if (diff < bestDiff || (diff == bestDiff && cur->val < best)) {
            best = cur->val;
            bestDiff = diff;
        }

        if (target < cur->val) cur = cur->left;
        else if (target > cur->val) cur = cur->right;
        else break;
    }
    return best;
}
