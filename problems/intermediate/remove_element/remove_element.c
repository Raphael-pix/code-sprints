#include <stdio.h>

// Write your code here
int removeElement(int nums[], int size, int val) {
    // Implement your solution
    return 0;
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int size = 4;
    int val = 3;
    int k = removeElement(nums, size, val);  // Expected output: 2
    printf("%d\n", k);
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);  // Expected output: 2 2 _ _
    }
    return 0;
}
