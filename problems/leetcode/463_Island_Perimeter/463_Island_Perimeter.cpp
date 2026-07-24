class Solution {
private:
    int ans = 0, row, col;
    int dir[4][2] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    bool vis[100][100] = {false};

    bool isValid(int i, int j) {
        return i >= 0 && i < row && j >= 0 && j < col;
    }
    int dfs(int si, int sj, vector<vector<int>>& grid) {
        vis[si][sj] = true;
        for (int i = 0; i < 4; i++) {
            int nrow = si + dir[i][0], ncol = sj + dir[i][1];
            if (!isValid(nrow, ncol) || grid[nrow][ncol] == 0) {
                ans++;
            }
            if (isValid(nrow, ncol) && !vis[nrow][ncol] &&
                grid[nrow][ncol] == 1) {
                dfs(nrow, ncol, grid);
            }
        }
        return ans;
    }

public:
    int islandPerimeter(vector<vector<int>>& grid) {
        row = grid.size(), col = grid[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (!vis[i][j] && grid[i][j] == 1) {
                    dfs(i, j, grid);
                }
            }
        }
        return ans;
    }
};