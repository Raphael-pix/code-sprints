#include <stdio.h>
#include "../ema_supercomputer.c"

void test() {
    char* grid[] = {
        "GGGGGG",
        "GBBBGB",
        "GGGGGG",
        "GGBBGB",
        "GGGGGG"
    };

    int result = twoPluses(grid, 5, 6);

    if (result != 5) {
        printf("❌ Test failed. Expected 5, got %d\n", result);
    } else {
        printf("✅ C test passed!\n");
    }
}

int main() {
    test();
    return 0;
}
