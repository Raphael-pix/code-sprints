#include <stdio.h>
#include "../build_a_string.c"

void test_case_1() {
    int a = 4;
    int b = 5;
    const char *s = "aabaacaba";
    int expected = 26;
    int result = buildString(a, b, s);
    printf("Test case 1: %s (Got %d, Expected %d)\n", (result == expected) ? "Passed" : "Failed", result, expected);
}

int main() {
    test_case_1();
    return 0;
}
