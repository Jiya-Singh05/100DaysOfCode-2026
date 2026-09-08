#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y) {
    unsigned int diff = x ^ y;
    int count = 0;

    while (diff != 0) {
        diff &= (diff - 1);
        count++;
    }

    return count;
}
