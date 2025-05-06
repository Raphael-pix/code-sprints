#include <stdio.h>
#include <stdlib.h>

/**
 * Rounds the grades according to the rules.
 * @param grades array of student grades
 * @param n size of array
 * @param result output array to store rounded grades
 */

int* gradingStudents(int grades[], int grades_count) {
    int* result = (int*)malloc(sizeof(int) * grades_count);  

    for (int i = 0; i < grades_count; i++) {
        int grade = grades[i];
        if (grade < 38) {
            result[i] = grade;
        } else {
            int nextMultipleOf5 = ((grade / 5) + 1) * 5;
            if (nextMultipleOf5 - grade < 3) {
                result[i] = nextMultipleOf5;
            } else {
                result[i] = grade;
            }
        }
    }
    return result;
}
