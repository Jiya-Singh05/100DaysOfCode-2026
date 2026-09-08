#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

int hammingWeight(unsigned int n) {
    int count = 0;

    while (n != 0) {
        n &= (n - 1);
        count++;
    }

    return count;
}
