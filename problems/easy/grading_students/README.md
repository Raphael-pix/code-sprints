# Grading students

## Problem Statement

Kimathi University has the following grading policy:

- Every student receives a *grade* in the inclusive range from *0* to *100* .
- Any *grade* less than *40* is a failing grade.

### Task

Sam is a professor at the university and likes to round each student's *grade* according to these rules:

- If the difference between the *grade* and the next multiple of *5* is less than *3*, round *grade* up to the next multiple of *5*.
- If the value of *grade* is less than *38*, no rounding occurs as the result will still be a failing grade.

### Function Description

The function gradingStudents has the following parameter(s):

- *int grades[n]* : the grades before rounding.

Returns:

- *int[n]* : the grades after rounding

### Example

`
grades = [73, 67, 38, 33]
`
`
output = [75, 67, 40, 33]
`

### Constraints

- 1 ≤ *n* ≤ 60
- 0 ≤ *grades[i]* ≤ 100

### Where to write your code

Each language has a starter file:
- `grading_students.py`
- `grading_students.js`
- `grading_students.c`
- `grading_students.cpp`
- `GradingStudents.java`

Open the file and complete the `gradingStudents` function.