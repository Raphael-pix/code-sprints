#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../organizing_container.c"

void test() {
    int n = 2;
    int** containers = malloc(n * sizeof(int*));
    containers[0] = (int[]){1, 4};
    containers[1] = (int[]){2, 3};

    char* result = organizingContainers(containers, n);
    if (strcmp(result, "Impossible") != 0) {
        printf("❌ Test failed. Expected Impossible, got %s\n", result);
        exit(1);
    }

    printf("✅ C test passed!\n");
}

int main() {
    test();
    return 0;
}
