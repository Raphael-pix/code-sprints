# Bear and Steady gene

## Problem Statement
A gene is represented as a string of length *n* (where *n* is divisible by *4*), composed of the letters *A*, *C*, *T*, and *G*. It is considered to be steady if each of the four letters occurs exactly `*n*/4` times. For example, **GACT** and **AAGTGCCT** are both steady genes.

Bear Limak is a famous biotechnology scientist who specializes in modifying bear DNA to make it steady. Right now, he is examining a gene represented as a string *gene*. It is not necessarily steady. Fortunately, Limak can choose one (maybe empty) substring of *gene* and replace it with any string of the same length.

### Task

Modifying a large substring of bear genes can be dangerous. Given a string *gene*, can you help Limak find the length of the smallest possible substring that he can replace to make *gene* a steady gene?

**Note:** A substring of a string *s* is a subsequence made up of zero or more contiguous characters of *s*.


### Function Description

steadyGene function has the following parameter:
- gene: a string

It should return an integer that represents the length of the smallest substring to replace.

### Example

```
**Example 1:**
Input: GAAATAAA
Output: 5
```

### Constraints

- 4 ≤ *n* ≤ 500,000
- *n* is divisible by 4
- gene[i] ∈ [CGAT]
