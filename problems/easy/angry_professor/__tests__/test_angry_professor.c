#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../angry_professor.c"

void test() {
    int k = 3;
    int a[] = {-1, -3, 4, 2};
    int n = 4;

    char* result = angryProfessor(k, a, n);
    if (strcmp(result, "YES") != 0) {
        printf("❌ Test failed. Expected YES, got %s\n", result);
        exit(1);
    }

    printf("✅ C test passed!\n");
}

int main() {
    test();
    return 0;
}
