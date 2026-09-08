#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

int mostFrequentEven(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int x : nums) {
        if (x % 2 == 0) freq[x]++;
    }

    int best = -1, bestCount = 0;
    for (auto& [val, cnt] : freq) {
        if (cnt > bestCount || (cnt == bestCount && val < best)) {
            best = val;
            bestCount = cnt;
        }
    }
    return best;
}
