#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

string officePrinterWars(string jobs) {
    queue<char> q;
    for (char c : jobs) q.push(c);

    int banS = 0; // pending cancellations Sales owes to Marketing
    int banM = 0; // pending cancellations Marketing owes to Sales
    int countS = count(jobs.begin(), jobs.end(), 'S');
    int countM = (int)jobs.size() - countS;

    while (countS > 0 && countM > 0) {
        char job = q.front();
        q.pop();

        if (job == 'S') {
            if (banS > 0) {
                // this Sales job gets cancelled by a pending Marketing ban
                banS--;
                countS--;
            } else {
                // process it, Sales now owes Marketing a cancellation
                banM++;
                q.push('S');
            }
        } else { // job == 'M'
            if (banM > 0) {
                banM--;
                countM--;
            } else {
                banS++;
                q.push('M');
            }
        }
    }

    return countS > 0 ? "Sales" : "Marketing";
}
