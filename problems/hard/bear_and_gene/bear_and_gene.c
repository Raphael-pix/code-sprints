#include <stdio.h>
#include <string.h>

#define MAX_LEN 500001

/**
 * Finds the length of the smallest substring that can be replaced 
 * to make the gene steady.
 *
 * @param gene The input gene string.
 * @return The length of the smallest substring to replace.
 */
int steadyGene(char* gene) {    
    // write your code here    
    return -1; 
}

int main() {
    // Example usage:
    char gene[MAX_LEN];
    scanf("%s", gene);
    int result = steadyGene(gene);
    printf("%d\n", result);
    return 0;
}
