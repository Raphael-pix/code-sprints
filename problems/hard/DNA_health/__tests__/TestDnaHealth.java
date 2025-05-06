package problems.hard.DNA_health.__tests__;

import problems.hard.DNA_health.DnaHealth;

public class TestDnaHealth {
    public static void main(String[] args) {
        int n = 6;
        String[] genes = {"a", "b", "c", "aa", "d", "b"};
        int[] health = {1, 2, 3, 4, 5, 6};

        int[][] strands = {
            {1, 5},
            {0, 4},
            {2, 4}
        };
        String[] strandStrings = {"caaab", "xyz", "bcdybc"};

        int[] result = DnaHealth.computeDnaHealth(n, genes, health, strands, strandStrings);

        if (result[0] != 0 || result[1] != 19) {
            throw new AssertionError("❌ Test failed: Expected [0, 19], got [" + result[0] + ", " + result[1] + "]");
        }
        System.out.println("✅ All Java tests passed!");
    }
}
