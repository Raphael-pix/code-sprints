package problems.easy.programmer_day;

public class ProgrammerDay {
    /**
     * Returns the 256th day of the year in Russia for the given year.
     * 
     * @param {number} year
     * @returns {string} in format dd.mm.yyyy
     */
    public static String dayOfProgrammer(int year) {
        // Write your code here
        return String.format("12.09.%d", year);
    }
}
