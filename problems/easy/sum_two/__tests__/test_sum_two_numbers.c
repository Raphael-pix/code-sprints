#include <assert.h>
#include <stdio.h>
#include "../sum_two_numbers.c"

int main() {
    // Test 1
    assert(sum_two(3, 4) == 7);
    // Test 2
    assert(sum_two(0, 0) == 0);
    // Test 3
    assert(sum_two(-5, 5) == 0);

    printf("✅ All C tests passed.\n");
    return 0;
}
