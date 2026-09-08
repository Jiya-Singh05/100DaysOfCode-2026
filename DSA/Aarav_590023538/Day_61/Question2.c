#include <stdio.h>
#include <string.h>

#define MAXN 2001

int mentorArr[MAXN]; // 0-indexed: mentorArr[i] is student (i+1)'s mentor label, or -1
int memo[MAXN];       // memo[label] = depth of that student in their mentorship chain

int depthOf(int label) {
    if (memo[label] != 0) return memo[label];

    int m = mentorArr[label - 1];
    if (m == -1) return memo[label] = 1;

    return memo[label] = 1 + depthOf(m);
}

int minGroups(int n) {
    memset(memo, 0, sizeof(memo));
    int best = 0;

    for (int label = 1; label <= n; label++) {
        int d = depthOf(label);
        if (d > best) best = d;
    }
    return best;
}
