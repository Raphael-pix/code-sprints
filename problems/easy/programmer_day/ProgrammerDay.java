package problems.easy.programmer_day;

public class ProgrammerDay {
    /**
     * Returns the 256th day of the year in Russia for the given year.
     * 
     * @param {number} year
     * @returns {string} in format dd.mm.yyyy
     */
    public static String dayOfProgrammer(int year) {
         if (year == 1918) {
            return String.format("26.09.%d", year);
        } else if ((year >= 1700 && year <= 1917 && year % 4 == 0) ||
                   (year >= 1919 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))) {
            return String.format("12.09.%d", year);
        } else {
            return String.format("13.09.%d", year);
        }
    }
}
