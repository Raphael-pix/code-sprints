package problems.intermediate.ema_supercomputer;

import java.util.*;

public class EmaSupercomputer {
    /**
    * Finds the maximum product of areas of two non-overlapping pluses.
    *
    * @param grid the input grid as a list of strings
    * @return maximum product of areas of two pluses
    */
    public static int twoPluses(String[] grid) {
         int n = grid.size(), m = grid.get(0).length();
        List<Set<String>> pluses = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid.get(i).charAt(j) == 'G') {
                    int length = 0;
                    while (true) {
                        if (i - length >= 0 && i + length < n &&
                            j - length >= 0 && j + length < m &&
                            grid.get(i - length).charAt(j) == 'G' &&
                            grid.get(i + length).charAt(j) == 'G' &&
                            grid.get(i).charAt(j - length) == 'G' &&
                            grid.get(i).charAt(j + length) == 'G') {

                            Set<String> cells = new HashSet<>();
                            for (int d = -length; d <= length; d++) {
                                cells.add((i + d) + "," + j);
                                cells.add(i + "," + (j + d));
                            }
                            pluses.add(cells);
                            length++;
                        } else {
                            break;
                        }
                    }
                }
            }
        }

        int maxProduct = 0;
        for (int i = 0; i < pluses.size(); i++) {
            for (int j = i + 1; j < pluses.size(); j++) {
                Set<String> a = pluses.get(i);
                Set<String> b = pluses.get(j);
                boolean overlap = false;
                for (String cell : a) {
                    if (b.contains(cell)) {
                        overlap = true;
                        break;
                    }
                }
                if (!overlap) {
                    maxProduct = Math.max(maxProduct, a.size() * b.size());
                }
            }
        }
        return maxProduct;
    }
    }
}
