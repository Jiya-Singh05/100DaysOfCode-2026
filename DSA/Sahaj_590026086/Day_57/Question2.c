#include <stdio.h>
#include <stdlib.h>

// The Twin Warehouses
struct Node { int val; struct Node *left; struct Node *right; };
int sumTwinTrees(struct Node* t1, struct Node* t2);
