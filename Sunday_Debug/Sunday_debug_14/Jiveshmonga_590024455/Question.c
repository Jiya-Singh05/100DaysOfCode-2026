#include <stdio.h>

int main() {

    int r, c;
    scanf("%d %d", &r, &c);

    int grid[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &grid[i][j]);

    int p;
    scanf("%d", &p);

    int portals[p][3];

    for (int i = 0; i < p; i++)
        scanf("%d %d %d",
              &portals[i][0],
              &portals[i][1],
              &portals[i][2]);

    int dp[r][c];

    dp[0][0] = grid[0][0];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            if (i == 0 && j == 0)
                continue;

            int fromTop = -1000000;
            int fromLeft = -1000000;

            if (i > 0)
                fromTop = dp[i - 1][j];

            if (j > 0)
                fromLeft = dp[i][j - 1];

            if (fromTop > fromLeft)
                dp[i][j] = fromTop;
            else
                dp[i][j] = fromLeft;

            dp[i][j] += grid[i][j];
        }
    }

    // Add portal bonuses
    for (int k = 0; k < p; k++) {
        int pr = portals[k][0];
        int pc = portals[k][1];
        int bonus = portals[k][2];

        dp[pr][pc] += bonus;
    }

    printf("%d\n", dp[r - 1][c - 1]);

    return 0;
}