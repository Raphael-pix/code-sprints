#include <vector>
using namespace std;

/**
 * Returns the player's rank after each game.
 * @param ranked the leaderboard scores
 * @param player the player's scores
 * @return List of player ranks after each game
*/

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> unique_ranked;
    unique_ranked.push_back(ranked[0]);
    for (int i = 1; i < ranked.size(); ++i) {
        if (ranked[i] != ranked[i - 1]) {
            unique_ranked.push_back(ranked[i]);
        }
    }

    vector<int> res;
    int i = unique_ranked.size() - 1;

    for (int score : player) {
        while (i >= 0 && score >= unique_ranked[i]) {
            i--;
        }
        res.push_back(i + 2);  // +2 for 1-based and extra back
    }
    return res;
}
