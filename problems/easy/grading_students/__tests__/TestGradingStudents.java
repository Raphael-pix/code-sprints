package problems.easy.grading_students.__tests__;

import problems.easy.grading_students.GradingStudents;

public class TestGradingStudents {
    public static void main(String[] args) {
        int[] grades = {73, 67, 38, 33};
        int[] result = GradingStudents.gradingStudents(grades);
        int[] expected = {75, 67, 40, 33};

        for (int i = 0; i < grades.length; i++) {
            if (result[i] != expected[i]) {
                throw new AssertionError("❌ Test failed at index " + i + ". Expected " + expected[i] + ", got " + result[i]);
            }
        }

        System.out.println("✅ Java test passed!");
    }
}
