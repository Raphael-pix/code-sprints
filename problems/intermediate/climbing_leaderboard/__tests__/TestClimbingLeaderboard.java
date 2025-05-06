package problems.intermediate.climbing_leaderboard.__tests__;

import problems.intermediate.climbing_leaderboard.ClimbingLeaderboard;
import java.util.*;


public class TestClimbingLeaderboard {
    public static void main(String[] args) {
        List<Integer> ranked = Arrays.asList(100, 100, 50, 40, 40, 20, 10);
        List<Integer> player = Arrays.asList(5, 25, 50, 120);
        List<Integer> expected = Arrays.asList(6, 4, 2, 1);

        List<Integer> result = ClimbingLeaderboard.climbingLeaderboard(ranked, player);

        if (!result.equals(expected)) {
            throw new AssertionError("❌ Test failed. Expected " + expected + ", got " + result);
        }

        System.out.println("✅ Java test passed!");
    }
}
