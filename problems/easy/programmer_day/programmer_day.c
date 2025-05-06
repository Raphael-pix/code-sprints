#include <stdio.h>
#include <stdlib.h>

char* dayOfProgrammer(int year) {
    // Write your code here
    char* result = (char*)malloc(20);
    sprintf(result, "12.09.%d", year);
    return result;
}
