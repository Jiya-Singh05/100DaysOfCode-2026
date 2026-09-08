#include <stdio.h>
#include <stdlib.h>
int findParent(int* parent, int i) {
    if (parent[i] == i) return i;
    return parent[i] = findParent(parent, parent[i]);
}
void unionNodes(int* parent, int* rank, int i, int j) {
    int rootI = findParent(parent, i);
    int rootJ = findParent(parent, j);
    if (rootI != rootJ) { parent[rootI] = rootJ; }
}
