#include <stdio.h>
#include <string.h>

void computeDnaHealth(int n, char* genes[], int health[], int strands[][3], char* strandStrings[], int numStrands, int* minHealth, int* maxHealth);

void test_dna_health() {
    int n = 6;
    char* genes[] = {"a", "b", "c", "aa", "d", "b"};
    int health[] = {1, 2, 3, 4, 5, 6};

    int strands[3][3] = {{1, 5}, {0, 4}, {2, 4}};
    char* strandStrings[] = {"caaab", "xyz", "bcdybc"};
    int minHealth, maxHealth;

    computeDnaHealth(n, genes, health, strands, strandStrings, 3, &minHealth, &maxHealth);

    if (minHealth != 0 || maxHealth != 19) {
        printf("❌ Test failed: Expected 0 19, got %d %d\n", minHealth, maxHealth);
    } else {
        printf("✅ All C tests passed!\n");
    }
}

int main() {
    test_dna_health();
    return 0;
}
