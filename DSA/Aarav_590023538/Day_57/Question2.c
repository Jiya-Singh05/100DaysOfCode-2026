#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

bool isMirror(const vector<long long>& a, const vector<long long>& b,
              int i, int j) {
    // If both nodes are missing
    if ((i >= a.size() || a[i] == -1) &&
        (j >= b.size() || b[j] == -1)) {
        return true;
    }

    // If one node is missing
    if (i >= a.size() || a[i] == -1 ||
        j >= b.size() || b[j] == -1) {
        return false;
    }

    // Values must be equal
    if (a[i] != b[j])
        return false;

    // Mirror comparison:
    // left of A <-> right of B
    // right of A <-> left of B
    return isMirror(a, b, 2 * i + 1, 2 * j + 2) &&
           isMirror(a, b, 2 * i + 2, 2 * j + 1);
}
