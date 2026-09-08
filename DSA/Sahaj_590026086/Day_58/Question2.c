#include <stdio.h>
#include <stdlib.h>
struct Node { int val; struct Node *left; struct Node *right; };
struct Node* findLCA(struct Node* root, int n1, int n2) {
    if (!root) return NULL;
    if (root->val == n1 || root->val == n2) return root;
    struct Node* left = findLCA(root->left, n1, n2);
    struct Node* right = findLCA(root->right, n1, n2);
    if (left && right) return root;
    return left ? left : right;
}
