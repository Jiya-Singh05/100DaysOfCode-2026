#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

bool hasEulerTrail(int n, const vector<pair<int, int>>& edges) {
    vector<int> degree(n + 1, 0);

    for (auto [u, v] : edges) {
        degree[u]++;
        degree[v]++;
    }

    int odd = 0;
    for (int i = 1; i <= n; i++)
        odd += (degree[i] & 1);

    return odd == 0 || odd == 2;
}
