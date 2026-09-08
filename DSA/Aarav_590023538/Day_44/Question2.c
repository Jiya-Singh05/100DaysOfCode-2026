#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

string favouriteNumber(vector<int>& nums, int favoriteIndex, int k) {
    int val = nums[favoriteIndex - 1]; // convert to 0-indexed
    int cntGreater = 0, cntEqual = 0;

    for (int x : nums) {
        if (x > val) cntGreater++;
        else if (x == val) cntEqual++;
    }

    if (cntGreater + cntEqual <= k) return "YES";   // definitely removed
    if (cntGreater >= k) return "NO";                // definitely not removed
    return "MAYBE";                                  // depends on tie-breaking
}
