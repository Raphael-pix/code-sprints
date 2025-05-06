#include <stdio.h>
#include <stdlib.h>
#include "../grading_students.c"

void test() {
    int grades[] = {73, 67, 38, 33};
    int n = 4;
    int* result = gradingStudents(grades, n);

    int expected[] = {75, 67, 40, 33};
    for (int i = 0; i < n; i++) {
        if (result[i] != expected[i]) {
            printf("❌ Test failed at index %d. Expected %d, got %d\n", i, expected[i], result[i]);
            exit(1);
        }
    }

    printf("✅ C test passed!\n");
    free(result);
}

int main() {
    test();
    return 0;
}
