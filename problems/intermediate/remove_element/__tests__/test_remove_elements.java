package problems.intermediate.remove_element.__tests__;

import java.util.Arrays;
import problems.intermediate.remove_element.remove_element;

public class test_remove_elements {
    public static void main(String[] args) {
        // Test case 1
        int[] nums1 = {3, 2, 2, 3};
        int val1 = 3;
        int k1 = remove_element.removeElement(nums1, val1);
        if (k1 != 2) {
            throw new AssertionError("Test 1 failed: Expected k = 2, got " + k1);
        }
        int[] result1 = Arrays.copyOf(nums1, k1);
        Arrays.sort(result1);
        if (!Arrays.equals(result1, new int[]{2, 2})) {
            throw new AssertionError("Test 1 failed: Expected [2, 2], got " + Arrays.toString(result1));
        }

        // Test case 2
        int[] nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
        int val2 = 2;
        int k2 = remove_element.removeElement(nums2, val2);
        if (k2 != 5) {
            throw new AssertionError("Test 2 failed: Expected k = 5, got " + k2);
        }
        int[] result2 = Arrays.copyOf(nums2, k2);
        Arrays.sort(result2);
        if (!Arrays.equals(result2, new int[]{0, 0, 1, 3, 4})) {
            throw new AssertionError("Test 2 failed: Expected [0, 0, 1, 3, 4], got " + Arrays.toString(result2));
        }

        System.out.println("✅ All Java tests passed!");
    }
}
