#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Builds the tree directly from heap-array indexing: node i's children live
// at 2i+1 and 2i+2; -1 (or an out-of-range index) means missing.
TreeNode* build(vector<int>& tree, int idx) {
    if (idx >= (int)tree.size() || tree[idx] == -1) return nullptr;

    TreeNode* node = new TreeNode(tree[idx]);
    node->left = build(tree, 2 * idx + 1);
    node->right = build(tree, 2 * idx + 2);
    return node;
}

int lowestCommonAncestor(TreeNode* root, int a, int b) {
    TreeNode* cur = root;
    while (cur) {
        if (a < cur->val && b < cur->val) cur = cur->left;
        else if (a > cur->val && b > cur->val) cur = cur->right;
        else return cur->val; // split point, or one of a/b equals cur->val
    }
    return -1; // unreachable given the problem's guarantee
}
