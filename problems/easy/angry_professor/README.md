# Angry Professor

## Problem Statement

A Discrete Mathematics professor has a class of students. Frustrated with their lack of discipline, the professor decides to cancel class if fewer than some number of students are present when class starts. Arrival times go from on time (**arrivalTime ≤ 0**) to arrived late (**arrivalTime > 0**).

### Task

Given the arrival time of each student and a threshhold number of attendees, determine if the class is cancelled.

### Function Description

angryProfessor function has the following parameter(s):

- int k: the threshold number of students
- int a[n]: the arrival times of the *n* students

Returns
- string: either **YES**, if class is cancelled or **NO** otherwise

### Example

**Input**
`
k = 3, arrivalTimes= [-1, -3, 4, 2]
`
**Output**
Only two students are on time → class is **cancelled** → return `"YES"`.

### Constraints

- 1 ≤ *n* ≤ 100
- 1 ≤ *k* ≤ n
- -100 ≤ *a[i]* ≤ 100, where i ∈ [1,...,n]

### Where to write your code

Each language has a starter file:
- `angry_Professor.py`
- `angry_Professor.js`
- `angry_Professor.c`
- `angry_Professor.cpp`
- `AngryProfessor.java`

Open the file and complete the `angryProfessor` function.