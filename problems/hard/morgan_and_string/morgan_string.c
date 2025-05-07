#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * Finds the lexicographically minimal string by merging two stacks of letters.
 *
 * @param a Jack's letters with top at index 0
 * @param b Daniel's letters with top at index 0
 * @return the minimal string (caller must free)
 */

char* morganAndString(const char* a, const char* b) {
    int lenA = strlen(a), lenB = strlen(b);
    char* result = (char*)malloc(lenA + lenB + 1);
    int i = 0, j = 0, k = 0;

    while (i < lenA && j < lenB) {
        if (strcmp(a + i, b + j) <= 0) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }
    while (i < lenA) result[k++] = a[i++];
    while (j < lenB) result[k++] = b[j++];
    result[k] = '\0';
    return result;
}
