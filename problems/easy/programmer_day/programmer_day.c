#include <stdio.h>
#include <stdlib.h>

/**
 * Returns the 256th day of the year in Russia for the given year.
 * @param {number} year
 * @returns {string} in format dd.mm.yyyy
 */

char *dayOfProgrammer(int year){
    // Write your code here
    char *result = (char *)malloc(20);
    sprintf(result, "12.09.%d", year);
    return result;
}
