package problems.easy.sum_two.__tests__;

import problems.easy.sum_two.SumTwoNumbers;

public class TestSumTwoNumbers {
    public static void main(String[] args) {
        if (SumTwoNumbers.sumTwoNumbers(3, 4) != 7) {
            throw new AssertionError("Test 1 failed");
        }
        if (SumTwoNumbers.sumTwoNumbers(0, 0) != 0) {
            throw new AssertionError("Test 2 failed");
        }
        System.out.println("✅ All Java tests passed!");
    }
}
