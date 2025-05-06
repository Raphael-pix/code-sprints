package problems.easy.programmer_day.__tests__;

import problems.easy.programmer_day.ProgrammerDay;

public class TestProgrammerDay {
    public static void main(String[] args) {
        int year = 1984;
        String result = ProgrammerDay.dayOfProgrammer(year);

        if (!result.equals("12.09.1984")) {
            throw new AssertionError("❌ Test failed. Expected 12.09.1984, got " + result);
        }

        System.out.println("✅ Java test passed!");
    }
}
