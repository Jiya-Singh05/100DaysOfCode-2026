#include <stdio.h>
#include <bits/stdc++.h>
#include <stdlib.h>

pp
#include <bits/stdc++.h>
using namespace std;

class Trie {
    struct Node {
        Node* child[2];

        Node() {
            child[0] = child[1] = nullptr;
        }
    };

    Node* root;

public:
    Trie() {
        root = new Node();
    }

    void insert(int num) {
        Node* cur = root;

        for (int bit = 30; bit >= 0; bit--) {
            int b = (num >> bit) & 1;

            if (!cur->child[b])
                cur->child[b] = new Node();

            cur = cur->child[b];
        }
    }

    int getMaximumXOR(int num) {
        Node* cur = root;
        int ans = 0;

        for (int bit = 30; bit >= 0; bit--) {
            int b = (num >> bit) & 1;
            int opposite = 1 - b;

            // Choosing the opposite bit makes this XOR bit 1,
            // which greedily maximizes the answer from MSB to LSB.
            if (cur->child[opposite]) {
                ans |= (1 << bit);
                cur = cur->child[opposite];
            } else {
                cur = cur->child[b];
            }
        }

        return ans;
    }
};
