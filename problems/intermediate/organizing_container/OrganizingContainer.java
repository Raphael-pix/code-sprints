package problems.intermediate.organizing_container;

import java.util.*;

public class OrganizingContainer {
    /**
     * Determines if it is possible to organize containers so each contains balls of only one type.
     *
     * @param container 2D int array where container[i][j] is the number of balls of type j in container i
     * @return 'Possible' if reorganization is possible, otherwise 'Impossible'
     */
    public static String organizingContainers(List<List<Integer>> container) {
        int n = container.size();
        List<Long> rowSum = new ArrayList<>(Collections.nCopies(n, 0L));
        List<Long> colSum = new ArrayList<>(Collections.nCopies(n, 0L));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = container.get(i).get(j);
                rowSum.set(i, rowSum.get(i) + val);
                colSum.set(j, colSum.get(j) + val);
            }
        }

        Collections.sort(rowSum);
        Collections.sort(colSum);

        return rowSum.equals(colSum) ? "Possible" : "Impossible";
    }
}
