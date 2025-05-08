#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../bear_and_gene.c"

void run_tests() {
    char gene1[] = "GAAATAAA";
    assert(steadyGene(gene1) == 5);
    printf("✅ Test 1 passed\n");

    char gene2[] = "GACT";
    assert(steadyGene(gene2) == 0);
    printf("✅ Test 2 passed\n");

    char gene3[] = "AAAACCCCGGGGTTTT";
    assert(steadyGene(gene3) == 0);
    printf("✅ Test 3 passed\n");

    char gene4[] = "AAGTGCCT";
    assert(steadyGene(gene4) == 0);
    printf("✅ Test 4 passed\n");
}

int main() {
    run_tests();
    return 0;
}
