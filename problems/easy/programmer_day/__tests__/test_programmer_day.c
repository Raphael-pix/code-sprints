#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../programmer_day.c"

void test() {
    int year = 1984;
    char* result = dayOfProgrammer(year);

    if (strcmp(result, "12.09.1984") != 0) {
        printf("❌ Test failed. Expected 12.09.1984, got %s\n", result);
        exit(1);
    }

    printf("✅ C test passed!\n");
    free(result);
}

int main() {
    test();
    return 0;
}
