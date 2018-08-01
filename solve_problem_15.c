#include <stdio.h>
#include <stdlib.h>

//
// Created by Constantin on 01.08.2018.
//
int countRoutes(int m, int n) {
    int routes;
    long *grid[m + 1];
    for (int k = 0; k < m + 1; k++) {
        grid[k] = (long *) malloc((n + 1) * sizeof(long));
    }

    for (int i = 0; i <= m; i++) {
        grid[0][i] = 1;
    }
    for (int i = 0; i <= n; i++) {
        grid[i][0] = 1;
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
        }
    }
    routes = grid[m][n];
    free(grid);
    return routes;
}

void solve_problem_15() {
    int routes = countRoutes(20, 20);
    printf("Routen fuer 20x20: %d\n", routes);
}
