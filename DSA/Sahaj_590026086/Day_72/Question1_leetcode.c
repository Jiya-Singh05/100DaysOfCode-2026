#include <stdio.h>
#include <stdlib.h>
void getDist(int* edges, int n, int start, int* dist) {
    for (int i = 0; i < n; i++) dist[i] = -1;
    int d = 0, curr = start;
    while (curr != -1 && dist[curr] == -1) {
        dist[curr] = d++;
        curr = edges[curr];
    }
}
