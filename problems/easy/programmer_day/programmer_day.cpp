#include <string>
using namespace std;

/**
 * Returns the 256th day of the year in Russia for the given year.
 * @param {number} year
 * @returns {string} in format dd.mm.yyyy
 */

string dayOfProgrammer(int year) {
     if (year == 1918) {
        return "26.09." + to_string(year);
    } else if ((year >= 1700 && year <= 1917 && year % 4 == 0) ||
               (year >= 1919 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))) {
        return "12.09." + to_string(year);
    } else {
        return "13.09." + to_string(year);
    }
}
