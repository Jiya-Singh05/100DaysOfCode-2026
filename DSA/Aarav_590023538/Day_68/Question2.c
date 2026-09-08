#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

// The Franchise Audit
Node* buildTree(vector<long long>& arr, int i, int n);
Info largestBSTHelper(Node* root, int& best);
int largestBSTSubtree(Node* root);
