# Organizing container of balls

David has several containers, each with a number of balls in it. He has just enough containers to sort each type of ball he has into its own container. David wants to sort the balls using his sort method.


## Problem Statemment 

### Task

David wants to perform some number of swap operations such that:

- Each container contains only balls of the same type.
- No two balls of the same type are located in different containers.

### Function Description

organizingContainers function has the following parameter(s):

- int containter[n][m]: a two dimensional array of integers that represent the number of balls of each color in each container

Returns:
- string: either ` Possible ` or ` Impossible `


### Example

containers = [[1,4],[2,3]]

There’s no way to fully sort using only swaps → **return `"Impossible"`**.

### Constraints

- 1 ≤ *n* ≤ 100
- 0 ≤ *containers[i][j]* ≤ 10<sup>9</sup> 

### Notes

You will receive **q** queries.  
Print the result (`Possible` or `Impossible`) for each query.

### Where to write your code

Each language has a starter file:
- `organizing_container.py`
- `organizing_container.js`
- `organizing_container.c`
- `organizing_container.cpp`
- `OrganizingContainer.java`

Open the file and complete the `organizingContainers` function.