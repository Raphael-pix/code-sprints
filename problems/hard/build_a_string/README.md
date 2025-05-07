# Build a string

## Problem Statement

Greg wants to build a string, *S* of length *N*. Starting with an empty string, he can perform *2* operations:

- Add a character to the end of *S* for *A* dollars.
- Copy any substring of *S*, and then add it to the end of *S* for *B* dollars.

### Task

Calculate minimum amount of money Greg needs to build *S*.

### Function Description

buildString function has the following parameter (s):

- int a: the price of adding a character
- int b: the price for adding a substring
- string s: the string to be built

Returns
- int: the minimum amount required

### Example

**Input:** 
`
a = 4, 
b = 5, 
s = aabaacaba
`

**Output:** `26`

### Constraints

- 1 ≤ |a|,|b| ≤ 3 × 10<sup>4</sup>
- 1 ≤ A, B ≤ 1000
- ***S*** is composed of lowercase letters only.

### Where to write your code

Each language has a starter file:
- `build_a_string.py`
- `build_a_string.js`
- `build_a_string.c`
- `build_a_string.cpp`
- `BuildString.java`

Open the file and complete the `buildString` function.
