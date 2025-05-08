#include <iostream>
#include <string>
using namespace std;

int steadyGene(string gene) {
     int n = gene.size();
    int required = n / 4;
    int count[128] = {0};

    for (char c : gene) count[c]++;

    if (count['A'] == required && count['C'] == required &&
        count['G'] == required && count['T'] == required)
        return 0;

    int minLen = n, left = 0;
    for (int right = 0; right < n; right++) {
        count[gene[right]]--;
        while (left < n && count['A'] <= required && count['C'] <= required &&
               count['G'] <= required && count['T'] <= required) {
            minLen = min(minLen, right - left + 1);
            count[gene[left]]++;
            left++;
        }
    }
    return minLen;
}

