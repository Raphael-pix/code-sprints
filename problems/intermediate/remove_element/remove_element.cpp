#include <iostream>
#include <vector>
using namespace std;

// Write your code here
int removeElement(vector<int>& nums, int val) {
    // Implement your solution
    return 0;
}

// Test case
int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    cout << removeElement(nums, val) << endl;  // Expected output: 2
    for (int num : nums) {
        cout << num << " ";  // Expected output: 2 2 _ _
    }
    return 0;
}
