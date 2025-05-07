#include <vector>
#include <string>
#include <set>
using namespace std;

/**
 * Finds the maximum product of areas of two non-overlapping pluses.
 *
 * @param grid vector of strings representing the grid
 * @return maximum product of areas of two pluses
 */

int twoPluses(vector<string> grid) {
     int n = grid.size(), m = grid[0].size();
    vector<set<pair<int, int>>> pluses;

    auto maxArm = [&](int i, int j) {
        int length = 0;
        while (
            i - length >= 0 && i + length < n &&
            j - length >= 0 && j + length < m &&
            grid[i - length][j] == 'G' && grid[i + length][j] == 'G' &&
            grid[i][j - length] == 'G' && grid[i][j + length] == 'G'
        ) {
            set<pair<int, int>> cells;
            for (int d = -length; d <= length; d++) {
                cells.insert({i + d, j});
                cells.insert({i, j + d});
            }
            pluses.push_back(cells);
            length++;
        }
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'G') {
                maxArm(i, j);
            }
        }
    }

    int maxProduct = 0;
    for (int i = 0; i < pluses.size(); i++) {
        for (int j = i + 1; j < pluses.size(); j++) {
            bool overlap = false;
            for (auto &cell : pluses[i]) {
                if (pluses[j].count(cell)) {
                    overlap = true;
                    break;
                }
            }
            if (!overlap) {
                maxProduct = max(maxProduct, (int)pluses[i].size() * (int)pluses[j].size());
            }
        }
    }
    return maxProduct;
}
