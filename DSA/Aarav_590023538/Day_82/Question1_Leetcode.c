#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

int numberOfSteps(int num) {
    int steps = 0;

    while (num != 0) {
        if (num & 1)
            num--;
        else
            num >>= 1;

        steps++;
    }

    return steps;
}
