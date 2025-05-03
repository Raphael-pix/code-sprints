const assert = require('assert');
const { removeElement } = require('../remove_element');

// Test case 1
let nums = [3, 2, 2, 3];
let val = 3;
let k = removeElement(nums, val);
assert.strictEqual(k, 2);
assert.deepStrictEqual(nums.slice(0, k), [2, 2]);

// Test case 2
nums = [0, 1, 2, 2, 3, 0, 4, 2];
val = 2;
k = removeElement(nums, val);
assert.strictEqual(k, 5);
assert.deepStrictEqual(nums.slice(0, k), [0, 1, 4, 0, 3]);

console.log('All tests passed!');
