#include <iostream>
#include <string>
using namespace std;

/**
 * Finds the lexicographically minimal string by merging two stacks of letters.
 *
 * @param a Jack's letters with top at index 0
 * @param b Daniel's letters with top at index 0
 * @return the minimal string
 */

std::string morganAndString(std::string a, std::string b) {
    string result;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
        if (a.substr(i) <= b.substr(j)) {
            result += a[i++];
        } else {
            result += b[j++];
        }
    }
    result += a.substr(i);
    result += b.substr(j);
    return result;
}
