#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {
    // Test case 1
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int k = removeElement(nums, val);
    assert(k == 2);
    assert(nums[0] == 2 && nums[1] == 2);

    // Test case 2
    nums = {0, 1, 2, 2, 3, 0, 4, 2};
    val = 2;
    k = removeElement(nums, val);
    assert(k == 5);
    assert(nums[0] == 0 && nums[1] == 1 && nums[2] == 4 && nums[3] == 0 && nums[4] == 3);

    cout << "All tests passed!" << endl;
    return 0;
}
