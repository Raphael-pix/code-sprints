#include <vector>
#include <string>
#include <algorithm>
using namespace std;

/**
 * Determines if it is possible to organize containers so that each contains balls of only one type.
 *
 * @param container A 2D vector where container[i][j] is the number of balls of type j in container i
 * @return "Possible" if reorganization is possible, otherwise "Impossible"
 */

string organizingContainers(vector<vector<int>> container) {
     int n = container.size();
    vector<long long> rowSum(n, 0), colSum(n, 0);

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            rowSum[i] += container[i][j];
            colSum[j] += container[i][j];
        }

    sort(rowSum.begin(), rowSum.end());
    sort(colSum.begin(), colSum.end());

    return rowSum == colSum ? "Possible" : "Impossible";
}
