#include <stdio.h>
#include <stdlib.h>

/**
 * Returns the 256th day of the year in Russia for the given year.
 * @param {number} year
 * @returns {string} in format dd.mm.yyyy
 */

char *dayOfProgrammer(int year){
     char* date = (char*)malloc(15);  // Allocate space for dd.mm.yyyy + null terminator

    if (year == 1918) {
        sprintf(date, "26.09.%d", year);
    } else if ((year >= 1700 && year <= 1917 && year % 4 == 0) ||
               (year >= 1919 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))) {
        sprintf(date, "12.09.%d", year);
    } else {
        sprintf(date, "13.09.%d", year);
    }

    return date;
}
