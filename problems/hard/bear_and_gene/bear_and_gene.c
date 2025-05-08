#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_LEN 500001

/**
 * Finds the length of the smallest substring that can be replaced 
 * to make the gene steady.
 *
 * @param gene The input gene string.
 * @return The length of the smallest substring to replace.
 */
int steadyGene(char* gene) {    
    int n = strlen(gene);
    int required = n / 4;
    int count[128] = {0};

    for (int i = 0; i < n; i++) {
        count[(int)gene[i]]++;
    }

    if (count['A'] == required && count['C'] == required &&
        count['G'] == required && count['T'] == required) {
        return 0;
    }

    int minLen = n;
    int left = 0;
    for (int right = 0; right < n; right++) {
        count[(int)gene[right]]--;
        while (left < n && count['A'] <= required && count['C'] <= required &&
               count['G'] <= required && count['T'] <= required) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
            }
            count[(int)gene[left]]++;
            left++;
        }
    }
    return minLen;
}

int main() {
    // Example usage:
    char gene[MAX_LEN];
    scanf("%s", gene);
    int result = steadyGene(gene);
    printf("%d\n", result);
    return 0;
}
