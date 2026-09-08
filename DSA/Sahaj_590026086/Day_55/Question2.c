#include <stdio.h>
#include <stdlib.h>

typedef struct { int len; int bty; } Song;
int compareSong(const void* a, const void* b) { return ((Song*)b)->bty - ((Song*)a)->bty; }
