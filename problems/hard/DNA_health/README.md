# Determining DNA health

DNA is a nucleic acid present in the bodies of living things. Each piece of DNA contains a number of genes, some of which are beneficial and increase the DNA's total health. Each gene has a health value, and the total health of a DNA is the sum of the health values of all the beneficial genes that occur as a substring in the DNA. We represent genes and DNA as non-empty strings of lowercase English alphabetic letters, and the same gene may appear multiple times as a susbtring of a DNA.

## Problem Statement

Given the following:

- An array of beneficial gene strings,**genes = [*g<sub>0</sub>, g<sub>1</sub>,...,g<sub>n-1</sub>*]**. Note that these gene sequences are not guaranteed to be distinct.
- An array of gene health values,**health = [*h<sub>0</sub>, h<sub>1</sub>,...,h<sub>n-1</sub>*]**, where each *h<sub>i</sub>*  is the health value for gene *g<sub>i</sub>*.
- A set of *s* DNA strands where the definition of each strand has three components,*start*, *end*, and *d*, where string *d* is a DNA for which genes *g<sub>start</sub>,...,g<sub>end</sub>*  are healthy.


### Task:

Find and print the respective total healths of the unhealthiest (minimum total health) and healthiest (maximum total health) strands of DNA as two space-separated values on a single line.

### Input Format

- The first line contains an integer,*n* , denoting the total number of genes.
- The second line contains *n* space-separated strings describing the respective values of *g<sub>0</sub>, g<sub>1</sub>,...,g<sub>n-1</sub>* (i.e., the elements of ).
- The third line contains *n* space-separated integers describing the respective values of *h<sub>0</sub>, h<sub>1</sub>,...,h<sub>n-1</sub>* (i.e., the elements of ).
- The fourth line contains an integer,*s* , denoting the number of strands of DNA to process.
- Each of the *s* subsequent lines describes a DNA strand in the form start end d, denoting that the healthy genes for DNA strand *d* are *g<sub>start</sub>,...,g<sub>end</sub>* and their respective correlated health values are *h<sub>start</sub>,...,h<sub>end</sub>*.

### Output Format

Print two space-separated integers describing the respective total health of the unhealthiest and the healthiest strands of DNA.

### Constraints

- 1 ≤ n, s ≤ 10<sup>5</sup>
- 0 ≤ h<sub>i</sub> ≤ 10<sup>7</sup>
- 0 ≤ *first* ≤ *last* < n
- 1 ≤ the sum of the lengths of all genes and DNA strands ≤ 2 × 10<sup>6</sup>
- It is guaranteed that each *g<sub>i</sub>* consists of lowercase English alphabetic letters only (i.e., *a* to *z*).

### Example

**Sample Input**
`
6
a b c aa d b
1 2 3 4 5 6
3
1 5 caaab
0 4 xyz
2 4 bcdybc
`

**Sample Output**
`
0 19
`