#include <stdio.h>
#include <stdlib.h>

int* gradingStudents(int grades[], int grades_count) {
    int* result = (int*)malloc(sizeof(int) * grades_count);
    for (int i = 0; i < grades_count; i++) {
        result[i] = grades[i];
    }
    return result;
}
