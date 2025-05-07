#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 15
#define MAX_PLUSES 500

typedef struct {
    int cells[100][2];
    int size;
} Plus;

char grid[MAX][MAX];
Plus pluses[MAX_PLUSES];
int plus_count = 0;
int n, m;

void add_plus(int i, int j, int len) {
    Plus p;
    p.size = 0;
    for (int d = -len; d <= len; d++) {
        p.cells[p.size][0] = i + d;
        p.cells[p.size][1] = j;
        p.size++;
    }
    for (int d = -len; d <= len; d++) {
        if (d != 0) {
            p.cells[p.size][0] = i;
            p.cells[p.size][1] = j + d;
            p.size++;
        }
    }
    pluses[plus_count++] = p;
}

int overlap(Plus* a, Plus* b) {
    for (int i = 0; i < a->size; i++) {
        for (int j = 0; j < b->size; j++) {
            if (a->cells[i][0] == b->cells[j][0] && a->cells[i][1] == b->cells[j][1]) {
                return 1;
            }
        }
    }
    return 0;
}

int twoPluses(int n, int m, char grid[MAX][MAX]) {
    plus_count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'G') {
                int len = 0;
                while (
                    i - len >= 0 && i + len < n &&
                    j - len >= 0 && j + len < m &&
                    grid[i - len][j] == 'G' && grid[i + len][j] == 'G' &&
                    grid[i][j - len] == 'G' && grid[i][j + len] == 'G'
                ) {
                    add_plus(i, j, len);
                    len++;
                }
            }
        }
    }

    int max_product = 0;
    for (int i = 0; i < plus_count; i++) {
        for (int j = i + 1; j < plus_count; j++) {
            if (!overlap(&pluses[i], &pluses[j])) {
                int area1 = pluses[i].size;
                int area2 = pluses[j].size;
                if (area1 * area2 > max_product) {
                    max_product = area1 * area2;
                }
            }
        }
    }
    return max_product;
}
