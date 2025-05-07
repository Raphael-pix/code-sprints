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
    // Allocate enough space for combined string + 1 for null terminator
    size_t lenA = strlen(a);
    size_t lenB = strlen(b);
    char* result = (char*)malloc(lenA + lenB + 1);
    if (!result) return NULL;

    // Write your code here — currently returns empty string
    result[0] = '\0';
    return result;
}
