package problems.easy.angry_professor;

import java.util.*;

public class AngryProfessor {
     /**
     * Determines if the class is cancelled.
     * @param k threshold number of students
     * @param a array of arrival times
     * @return "YES" if class is cancelled, "NO" otherwise
     */
    public static String angryProfessor(int k, List<Integer> a) {
        int onTime = 0;
        for (int time : a) {
            if (time <= 0) {
                onTime++;
            }
        }
        return (onTime < k) ? "YES" : "NO";
    }
}
