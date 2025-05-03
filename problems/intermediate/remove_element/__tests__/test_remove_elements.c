#include <stdio.h>
#include <assert.h>

int removeElement(int nums[], int size, int val) {
    int k = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {
    // Test case 1
    int nums[] = {3, 2, 2, 3};
    int size = 4;
    int val = 3;
    int k = removeElement(nums, size, val);
    assert(k == 2);
    assert(nums[0] == 2 && nums[1] == 2);

    // Test case 2
    int nums2[] = {0, 1, 2, 2, 3, 0, 4, 2};
    size = 8;
    val = 2;
    k = removeElement(nums2, size, val);
    assert(k == 5);
    assert(nums2[0] == 0 && nums2[1] == 1 && nums2[2] == 4 && nums2[3] == 0 && nums2[4] == 3);

    printf("All tests passed!\n");
    return 0;
}
