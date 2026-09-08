#include <stdio.h>
#include <stdlib.h>
typedef struct { int start; int end; } Activity;
int compareActivity(const void* a, const void* b) { return ((Activity*)a)->end - ((Activity*)b)->end; }
