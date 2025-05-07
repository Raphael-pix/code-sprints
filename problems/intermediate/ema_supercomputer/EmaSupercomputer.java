package problems.intermediate.ema_supercomputer;

import java.util.ArrayList;
import java.util.List;

public class EmaSupercomputer {
    static class Plus {
        int x, y, size; // center (x,y) and arm length

        Plus(int x, int y, int size) {
            this.x = x;
            this.y = y;
            this.size = size;
        }

        List<String> getCells() {
            List<String> cells = new ArrayList<>();
            cells.add(x + "," + y);
            for (int d = 1; d <= size; d++) {
                cells.add((x + d) + "," + y);  // down
                cells.add((x - d) + "," + y);  // up
                cells.add(x + "," + (y + d));  // right
                cells.add(x + "," + (y - d));  // left
            }
            return cells;
        }

        int area() {
            return 4 * size + 1;
        }
    }

    /**
     * Finds the maximum product of areas of two non-overlapping pluses.
     *
     * @param grid the input grid as a list of strings
     * @return maximum product of areas of two pluses
     */
    public static int twoPluses(String[] grid) {
        int n = grid.length;
        int m = grid[0].length();
        List<Plus> pluses = new ArrayList<>();

        // Find all possible pluses
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i].charAt(j) != 'G') continue;
                int arm = 0;
                while (true) {
                    boolean canExpand = true;
                    int[] dx = {-1, 1, 0, 0};
                    int[] dy = {0, 0, -1, 1};
                    for (int d = 0; d < 4; d++) {
                        int ni = i + dx[d] * (arm + 1);
                        int nj = j + dy[d] * (arm + 1);
                        if (ni < 0 || ni >= n || nj < 0 || nj >= m || grid[ni].charAt(nj) != 'G') {
                            canExpand = false;
                            break;
                        }
                    }
                    if (canExpand) {
                        arm++;
                    } else {
                        break;
                    }
                }
                // Add all sizes from 0 up to arm
                for (int s = 0; s <= arm; s++) {
                    pluses.add(new Plus(i, j, s));
                }
            }
        }

        // Compare all pairs
        int maxProduct = 0;
        for (int i = 0; i < pluses.size(); i++) {
            Plus a = pluses.get(i);
            List<String> cellsA = a.getCells();
            for (int j = i + 1; j < pluses.size(); j++) {
                Plus b = pluses.get(j);
                List<String> cellsB = b.getCells();
                boolean overlap = false;
                for (String cell : cellsB) {
                    if (cellsA.contains(cell)) {
                        overlap = true;
                        break;
                    }
                }
                if (!overlap) {
                    int product = a.area() * b.area();
                    maxProduct = Math.max(maxProduct, product);
                }
            }
        }
        return maxProduct;
    }

    // For testing
    public static void main(String[] args) {
        String[] grid = {
                "GGGGGG",
                "GBBBGB",
                "GGGGGG",
                "GGBBGB",
                "GGGGGG"
        };
        System.out.println(twoPluses(grid));  // Expected: 5
    }
}
