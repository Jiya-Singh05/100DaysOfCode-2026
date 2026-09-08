#include <stdio.h>
#include <stdlib.h>

// Count Inversions in an Array
public long countInv(int[] a);
private long sort(int[] a, int[] tmp, int l, int r);
private long merge(int[] a, int[] tmp, int l, int m, int r);
