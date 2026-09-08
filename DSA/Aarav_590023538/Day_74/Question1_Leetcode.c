#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

// Count Unreachable Pairs of Nodes in an Undirected Graph (LeetCode #2316)
int find(int x);
void unite(int a, int b);
long long countPairs(int n, vector<vector<int>>& edges);
