class Solution {
private:
    int n, m;
    vector<vector<int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    void dfs(int ci, int cj, vector<vector<int>>& grid, vector<vector<int>>& vis) {
        vis[ci][cj] = 1;
        for (int i = 0; i < 4; i++) {
            int x = ci + dir[i][0];
            int y = cj + dir[i][1];
            if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y] && grid[x][y] == 1) {
                dfs(x, y, grid, vis);
            }
        }
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1 && !vis[i][0]) {
                dfs(i, 0, grid, vis);
            }
            if (grid[i][m-1] == 1 && !vis[i][m-1]) {
                dfs(i, m-1, grid, vis);
            }
        }
        for (int i = 0; i < m; i++) {
            if (grid[0][i] == 1 && !vis[0][i]) {
                dfs(0, i, grid, vis);
            }
            if (grid[n-1][i] == 1 && !vis[n-1][i]) {
                dfs(n-1, i, grid, vis);
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && !vis[i][j]) {
                    ans++;
                }
            }
        }
        return ans;
    }
};