#include <stdio.h>
#include <stdlib.h>

/**
 * Calculates the player's rank after each new score.
 *
 * @param ranked_count Number of elements in the ranked array.
 * @param ranked Array of leaderboard scores (descending order, may have duplicates).
 * @param player_count Number of elements in the player array.
 * @param player Array of player's scores (ascending order).
 * @param result_count Pointer to store the size of the returned array.
 * @return Dynamically allocated array of player ranks after each new score.
 *
 */

int* climbingLeaderboard(int* ranked, int rankedCount, int* player, int playerCount, int* resultCount) {
    int* unique = (int*)malloc(rankedCount * sizeof(int));
    int unique_count = 0;
    unique[0] = ranked[0];
    unique_count = 1;

    // Remove duplicates
    for (int i = 1; i < rankedCount; i++) {
        if (ranked[i] != ranked[i - 1]) {
            unique[unique_count++] = ranked[i];
        }
    }

    int* res = (int*)malloc(playerCount * sizeof(int));
    int i = unique_count - 1;

    for (int j = 0; j < playerCount; j++) {
        while (i >= 0 && player[j] >= unique[i]) {
            i--;
        }
        res[j] = i + 2;  // +2 for 1-based and extra back
    }

    *resultCount = playerCount;
    free(unique);
    return res;
}
