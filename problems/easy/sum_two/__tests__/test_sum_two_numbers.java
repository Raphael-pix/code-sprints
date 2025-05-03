package problems.easy.sum_two.__tests__;

import problems.easy.sum_two.sum_two_numbers;

public class test_sum_two_numbers {
    public static void main(String[] args) {
        if (sum_two_numbers.sum_two(3, 4) != 7) {
            throw new AssertionError("Test 1 failed");
        }
        if (sum_two_numbers.sum_two(0, 0) != 0) {
            throw new AssertionError("Test 2 failed");
        }
        System.out.println("✅ All Java tests passed!");
    }
}
