#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

vector<int> parent, sz;

int find(int x) {
    while (parent[x] != x) {
        parent[x] = parent[parent[x]];
        x = parent[x];
    }
    return x;
}

void unite(int a, int b) {
    a = find(a); b = find(b);
    if (a == b) return;
    if (sz[a] < sz[b]) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
}

long long countPairs(int n, vector<vector<int>>& edges) {
    parent.resize(n);
    sz.assign(n, 1);
    iota(parent.begin(), parent.end(), 0);

    for (auto& e : edges) unite(e[0], e[1]);

    long long remaining = n, ans = 0;
    for (int i = 0; i < n; i++) {
        if (find(i) == i) { // representative of a component
            ans += (long long) sz[i] * (remaining - sz[i]);
            remaining -= sz[i];
        }
    }
    return ans;
}
