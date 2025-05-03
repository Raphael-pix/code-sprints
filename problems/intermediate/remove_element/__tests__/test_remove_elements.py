from remove_element import removeElement

# Test case 1
nums = [3, 2, 2, 3]
val = 3
k = removeElement(nums, val)
assert k == 2
assert nums[:k] == [2, 2]

# Test case 2
nums = [0, 1, 2, 2, 3, 0, 4, 2]
val = 2
k = removeElement(nums, val)
assert k == 5
assert nums[:k] == [0, 1, 4, 0, 3]

print("All tests passed!")
