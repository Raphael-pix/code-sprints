package problems.intermediate.climbing_leaderboard;

import java.util.*;

public class ClimbingLeaderboard {
    /**
     * Returns the player's rank after each game.
     * @param ranked the leaderboard scores
     * @param player the player's scores
     * @return List of player ranks after each game
     */
    
    public static List<Integer> climbingLeaderboard(List<Integer> ranked, List<Integer> player) {
        List<Integer> uniqueRanked = new ArrayList<>();
        uniqueRanked.add(ranked.get(0));

        // Remove duplicates
        for (int i = 1; i < ranked.size(); i++) {
            if (!ranked.get(i).equals(ranked.get(i - 1))) {
                uniqueRanked.add(ranked.get(i));
            }
        }

        List<Integer> result = new ArrayList<>();
        int i = uniqueRanked.size() - 1;

        for (int score : player) {
            while (i >= 0 && score >= uniqueRanked.get(i)) {
                i--;
            }
            result.add(i + 2);  // +2 because of 1-based index and extra move back
        }
        return result;
    }
}
