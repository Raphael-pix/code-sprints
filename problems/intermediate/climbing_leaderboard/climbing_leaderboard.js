/**
 * Returns the player's rank after each game.
 * @param {number[]} ranked
 * @param {number[]} player
 * @returns {number[]}
 */

function climbingLeaderboard(ranked, player) {
    let uniqueRanked = [...new Set(ranked)];
    let result = [];
    let i = uniqueRanked.length - 1;

    for (let score of player) {
        while (i >= 0 && score >= uniqueRanked[i]) {
            i--;
        }
        result.push(i + 2);  // +2 for 1-based index and moving one extra back
    }
    return result;
}

module.exports = { climbingLeaderboard };
