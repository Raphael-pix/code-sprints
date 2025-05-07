#include <stdio.h>
#include <stdlib.h>

/**
 * Determines if it is possible to organize containers so that each contains balls of only one type.
 *
 * @param n The number of containers (and types of balls)
 * @param container The 2D array where container[i][j] is the number of balls of type j in container i
 * @return "Possible" if reorganization is possible, otherwise "Impossible"
 */
int cmp(const void *a, const void *b) {
    long long diff = *(long long*)a - *(long long*)b;
    return (diff > 0) - (diff < 0);
}

char* organizingContainers(int** container, int n) {
    long long* rowSum = (long long*)calloc(n, sizeof(long long));
    long long* colSum = (long long*)calloc(n, sizeof(long long));

    // Calculate row and column sums
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rowSum[i] += container[i][j];
            colSum[j] += container[i][j];
        }
    }

    // Sort both arrays
    qsort(rowSum, n, sizeof(long long), cmp);
    qsort(colSum, n, sizeof(long long), cmp);

    // Compare
    for (int i = 0; i < n; i++) {
        if (rowSum[i] != colSum[i]) {
            free(rowSum);
            free(colSum);
            return "Impossible";
        }
    }

    free(rowSum);
    free(colSum);
    return "Possible";
}
