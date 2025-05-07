#include <stdio.h>
#include <stdlib.h>

/**
 * Determines if the class is cancelled.
 * @param k - threshold number of students
 * @param a - array of arrival times
 * @param n - number of students
 * @return "YES" if class is cancelled, "NO" otherwise
 */

char* angryProfessor(int k, int* a, int n) {
     int onTime = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= 0) {
            onTime++;
        }
    }
    return (onTime < k) ? "YES" : "NO";
}
