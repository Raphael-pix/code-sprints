#include <stdio.h>
#include <stdlib.h>
#include "../climbing_leaderboard.c"

void assert_equal(int* result, int* expected, int size) {
    for (int i = 0; i < size; i++) {
        if (result[i] != expected[i]) {
            printf("❌ Test failed at index %d: expected %d, got %d\n", i, expected[i], result[i]);
            exit(1);
        }
    }
}

int main() {
    int ranked[] = {100, 100, 50, 40, 40, 20, 10};
    int player[] = {5, 25, 50, 120};
    int expected[] = {6, 4, 2, 1};

    int resultCount;
    int* result = climbingLeaderboard(ranked, 7, player, 4, &resultCount);

    if (result) {
        assert_equal(result, expected, resultCount);
        free(result);
        printf("✅ C test passed!\n");
    } else {
        printf("❌ C function returned NULL.\n");
    }
    return 0;
}
