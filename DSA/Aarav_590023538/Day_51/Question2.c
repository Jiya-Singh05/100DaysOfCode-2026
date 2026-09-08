#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

int firstInvalidRecord(vector<vector<string>>& deliveries) {
    // key: vendor_id + "#" + lot_number -> cert_code seen so far
    unordered_map<string, string> seen;

    for (int i = 0; i < (int)deliveries.size(); i++) {
        const string& vendor = deliveries[i][0];
        const string& lot    = deliveries[i][1];
        const string& cert   = deliveries[i][2];

        string key = vendor + "#" + lot;
        auto it = seen.find(key);

        if (it == seen.end()) {
            seen[key] = cert;
        } else if (it->second != cert) {
            return i;
        }
    }
    return -1;
}
