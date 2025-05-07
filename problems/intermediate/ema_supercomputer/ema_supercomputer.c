#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x, y;
    int size;  // arm length
} Plus;

int max(int a, int b) {
    return a > b ? a : b;
}

// Check if two pluses overlap
int isOverlapping(Plus a, Plus b) {
    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};

    // Collect all cells covered by plus a
    int coverA[100][2], countA = 0;
    coverA[countA][0] = a.x;
    coverA[countA++][1] = a.y;
    for (int k = 1; k <= a.size; k++) {
        for (int d = 0; d < 4; d++) {
            coverA[countA][0] = a.x + dx[d] * k;
            coverA[countA++][1] = a.y + dy[d] * k;
        }
    }

    // Collect all cells covered by plus b and check overlap
    int bx, by;
    if (b.x == a.x && b.y == a.y) return 1;
    if (b.size == 0) return 0; // trivial

    // center
    for (int i = 0; i < countA; i++) {
        if (coverA[i][0] == b.x && coverA[i][1] == b.y) return 1;
    }
    // arms
    for (int k = 1; k <= b.size; k++) {
        for (int d = 0; d < 4; d++) {
            bx = b.x + dx[d] * k;
            by = b.y + dy[d] * k;
            for (int i = 0; i < countA; i++) {
                if (coverA[i][0] == bx && coverA[i][1] == by) return 1;
            }
        }
    }
    return 0;
}

int twoPluses(char** grid, int n, int m) {
    Plus pluses[500];  // store all possible pluses
    int plusCount = 0;
    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};

    // find all pluses
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] != 'G') continue;
            int arm = 0;
            int canExpand = 1;
            while (canExpand) {
                for (int d = 0; d < 4; d++) {
                    int ni = i + dx[d] * (arm + 1);
                    int nj = j + dy[d] * (arm + 1);
                    if (ni < 0 || ni >= n || nj < 0 || nj >= m || grid[ni][nj] != 'G') {
                        canExpand = 0;
                        break;
                    }
                }
                if (canExpand) arm++;
            }
            // store all sizes of plus from 0 up to arm
            for (int s = 0; s <= arm; s++) {
                pluses[plusCount++] = (Plus){i, j, s};
            }
        }
    }

    // compare every pair
    int maxProduct = 0;
    for (int i = 0; i < plusCount; i++) {
        int areaA = 4 * pluses[i].size + 1;
        for (int j = i + 1; j < plusCount; j++) {
            int areaB = 4 * pluses[j].size + 1;
            if (!isOverlapping(pluses[i], pluses[j])) {
                int product = areaA * areaB;
                if (product > maxProduct) {
                    maxProduct = product;
                }
            }
        }
    }

    return maxProduct;
}
