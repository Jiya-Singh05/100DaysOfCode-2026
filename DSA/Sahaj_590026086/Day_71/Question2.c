#include <stdio.h>
#include <stdlib.h>
void encryptGrid(int** grid, int r, int c, int key) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) grid[i][j] ^= key;
    }
}
