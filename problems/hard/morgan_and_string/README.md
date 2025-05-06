# Morgan and string

Jack and Daniel are friends. Both of them like letters, especially uppercase ones.
They are cutting uppercase letters from newspapers, and each one of them has his collection of letters stored in a stack.

## Problem Statement

One beautiful day, Morgan visited Jack and Daniel. He saw their collections. He wondered what is the lexicographically minimal string made of those two collections. He can take a letter from a collection only when it is on the top of the stack. Morgan wants to use all of the letters in their collections.

### Task

Find the lexicographically minimal string made from Jack and Daniel's collection

### Function Description

morganAndString function has the following parameter(s):

string a: Jack's letters, top at index *0*
string b: Daniel's letters, top at index *0*
Returns
- string: the completed string

### Example

Assume Jack has collected ***a*= [A,C,A]** and Daniel has ***b*= [B,C,F]** . The example shows the top at index  for each stack of letters. Assemble the string as follows:

| Jack (a) | Daniel (b) | Result |
|----------|------------|--------|
| ACA      | BCF        | A      |
| CA       | BCF        | AB     |
| CA       | CF         | ABC    |
| A        | CF         | ABCA   |
| A        | F          | ABCAC  |
|          | F          | ABCACF |

Final: `ABCACF`

**Note** the choice when there was a tie at CA and CF.

### Constraints

- 1 ≤ |a|,|b| ≤ 10<sup>5</sup>
- *a* and *b* contain upper-case letters only, ascii[A-Z].

### Where to write your code

Each language has a starter file:
- `morgan_string.py`
- `morgan_string.js`
- `morgan_string.c`
- `morgan_string.cpp`
- `MorganString.java`

Open the file and complete the `morganAndString` function.