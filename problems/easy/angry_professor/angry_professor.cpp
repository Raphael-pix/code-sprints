#include <vector>
#include <string>
using namespace std;

/**
 * Determines if the class is cancelled.
 * @param k threshold number of students
 * @param a arrival times
 * @return "YES" if class is cancelled, "NO" otherwise
 */

string angryProfessor(int k, vector<int> a) {
     int onTime = 0;
    for (int time : a) {
        if (time <= 0) {
            onTime++;
        }
    }
    return (onTime < k) ? "YES" : "NO";
}
