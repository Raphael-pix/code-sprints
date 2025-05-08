package problems.hard.bear_and_gene.__tests__;

import problems.hard.bear_and_gene.BearAndGene;

public class TestBearAndGene {
    public static void main(String[] args) {
        test("GAAATAAA", 5);
        test("GACT", 0);
        test("AAAACCCCGGGGTTTT", 0);
        test("AAGTGCCT", 0);
        test("AAAAACCCGGTT", 2);
    }

    private static void test(String gene, int expected) {
        int result = BearAndGene.steadyGene(gene);
        if (result == expected) {
            System.out.println("✅ Passed for input: " + gene);
        } else {
            System.out.println("❌ Failed for input: " + gene + ". Expected: " + expected + ", got: " + result);
        }
    }
}
