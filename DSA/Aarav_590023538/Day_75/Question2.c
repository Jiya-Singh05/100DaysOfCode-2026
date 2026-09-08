#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

// Minimum Cost to Make a Ring Strongly Connected
int main() {
int n;
    cin >> n;
    // adj[u] holds the (at most 2) roads touching u, each stored as
    // {neighbor, sign, cost} where sign = +1 if the road is given as u->v,
    // and sign = -1 if the road is given as v->u.
    vector<vector<array<int, 3>>> adj(n + 1);
    long long totalCost = 0;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, 1, c});
        adj[b].push_back({a, -1, c});
        totalCost += c;
    }
    return 0;
}
