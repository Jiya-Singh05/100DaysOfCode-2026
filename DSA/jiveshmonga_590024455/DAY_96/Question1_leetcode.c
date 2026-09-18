int minPathSum(int** grid, int gridSize, int* gridColSize) {
    int rows = gridSize;
    int cols = gridColSize[0];

    for (int i = 1; i < cols; i++)
        grid[0][i] += grid[0][i - 1];

    for (int i = 1; i < rows; i++)
        grid[i][0] += grid[i - 1][0];

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {

            if (grid[i - 1][j] < grid[i][j - 1])
                grid[i][j] += grid[i - 1][j];
            else
                grid[i][j] += grid[i][j - 1];
        }
    }

    return grid[rows - 1][cols - 1];
}