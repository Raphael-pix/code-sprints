package problems.intermediate.ema_supercomputer.__tests__;

import problems.intermediate.ema_supercomputer.EmaSupercomputer;

public class TestEmaSupercomputer {
     public static void main(String[] args) {
        String[] grid = {
            "GGGGGG",
            "GBBBGB",
            "GGGGGG",
            "GGBBGB",
            "GGGGGG"
        };

        int result = EmaSupercomputer.twoPluses(grid);

        if (result != 5) {
            throw new AssertionError("❌ Test failed. Expected 5, got " + result);
        }

        System.out.println("✅ Java test passed!");
    }
}
