function removeElement(nums, val) {
    let count = 0;
    let current = 0;
    let end = nums.length - 1;

    while(current <= end){
        if(nums[end] === val){
            count++;
            end--;
            continue;
        }
        if(nums[current] === val){
            nums[current] = nums[end];
            nums[end] = val;
            end--;
            count++;
        }
        current++;
    }
    return nums.length - count;
}

// Test case
let nums = [3, 2, 2, 3];
let val = 3;
console.log(removeElement(nums, val));  // Expected output: 2
console.log(nums);  // Expected output: [2, 2, _, _]
