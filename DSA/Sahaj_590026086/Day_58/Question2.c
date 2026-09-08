#include <stdio.h>
#include <stdlib.h>

// The Dispute Resolution (Lowest Common Ancestor)
struct Node { int val; struct Node *left; struct Node *right; };
struct Node* findLCA(struct Node* root, int n1, int n2);
