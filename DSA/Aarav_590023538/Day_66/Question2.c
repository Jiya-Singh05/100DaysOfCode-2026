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

// Standard queue-skip build: -1 entries are skipped, no placeholder children created
TreeNode* buildTree(vector<int>& vals) {
    if (vals.empty() || vals[0] == -1) return nullptr;
    TreeNode* root = new TreeNode(vals[0]);
    queue<TreeNode*> q;
    q.push(root);
    size_t i = 1;
    while (!q.empty() && i < vals.size()) {
        TreeNode* node = q.front(); q.pop();
        if (i < vals.size()) {
            if (vals[i] != -1) { node->left = new TreeNode(vals[i]); q.push(node->left); }
            i++;
        }
        if (i < vals.size()) {
            if (vals[i] != -1) { node->right = new TreeNode(vals[i]); q.push(node->right); }
            i++;
        }
    }
    return root;
}

void collect(TreeNode* node, set<int>& ids) {
    if (!node) return;
    ids.insert(node->val);
    collect(node->left, ids);
    collect(node->right, ids);
}

vector<int> mergeEmployeeIds(vector<int>& tree1, vector<int>& tree2) {
    TreeNode* r1 = buildTree(tree1);
    TreeNode* r2 = buildTree(tree2);

    set<int> ids; // sorted + de-duplicated automatically
    collect(r1, ids);
    collect(r2, ids);

    return vector<int>(ids.begin(), ids.end());
}
