package problems.hard.build_a_string.__tests__;

import problems.hard.build_a_string.BuildString;

public class TestBuildString {
        public static void main(String[] args) {
        int a = 4;
        int b = 5;
        String s = "aabaacaba";
        int expected = 26;
        int result = BuildString.buildString(a, b, s);
        System.out.println("Test case 1: " + (result == expected ? "Passed" : "Failed") +
                " (Got " + result + ", Expected " + expected + ")");
    }

}
