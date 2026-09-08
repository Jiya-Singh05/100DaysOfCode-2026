#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

// The Great Divide
Node* buildTree(vector<long long>& arr, int i, int n);
void preorder(Node* root, vector<long long>& out);
void printBranch(Node* root);
