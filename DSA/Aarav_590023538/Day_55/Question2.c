#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

long long maxPleasure(vector<int>& length, vector<int>& beauty, int k) {
    int n = length.size();
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0);

    // Process songs in decreasing order of beauty
    sort(idx.begin(), idx.end(), [&](int a, int b) {
        return beauty[a] > beauty[b];
    });

    priority_queue<int, vector<int>, greater<int>> minHeap; // smallest length on top
    long long sumLen = 0, best = 0;

    for (int i : idx) {
        int len = length[i];
        int bty = beauty[i];

        minHeap.push(len);
        sumLen += len;

        if ((int)minHeap.size() > k) {
            sumLen -= minHeap.top();
            minHeap.pop();
        }

        // Current song has the smallest beauty among all selected so far
        best = max(best, sumLen * (long long)bty);
    }

    return best;
}
