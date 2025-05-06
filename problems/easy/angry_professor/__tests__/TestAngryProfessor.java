package problems.easy.angry_professor.__tests__;

import problems.easy.angry_professor.AngryProfessor;
import java.util.*;

public class TestAngryProfessor {
    public static void main(String[] args) {
        int k = 3;
        List<Integer> a = Arrays.asList(-1, -3, 4, 2);
        String result = AngryProfessor.angryProfessor(k, a);

        if (!result.equals("YES")) {
            throw new AssertionError("❌ Test failed. Expected YES, got " + result);
        }

        System.out.println("✅ Java test passed!");
    }
}
