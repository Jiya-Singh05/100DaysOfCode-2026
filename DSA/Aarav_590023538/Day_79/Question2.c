#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

int findSingleNumber(const vector<int>& nums) {
    int ans = 0;

    for (int x : nums)
        ans ^= x;

    return ans;
}
