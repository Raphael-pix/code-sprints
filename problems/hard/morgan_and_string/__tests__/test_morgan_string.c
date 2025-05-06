#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../morgan_string.c"

void assert_equal(const char* result, const char* expected, const char* test_name) {
    if (strcmp(result, expected) != 0) {
        printf("❌ %s failed: expected %s, got %s\n", test_name, expected, result);
        exit(1);
    } else {
        printf("✅ %s passed\n", test_name);
    }
}

int main() {
    char* res1 = morganAndString("ACA", "BCF");
    assert_equal(res1, "ABCACF", "Test 1");
    free(res1);

    char* res2 = morganAndString("JACK", "DANIEL");
    assert_equal(res2, "DAJACKNIEL", "Test 2");
    free(res2);

    printf("🎉 All C tests passed!\n");
    return 0;
}
