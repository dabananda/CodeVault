class Solution {
private:
    int n, m;
    bool flag;
    bool vis[100][100] = {false};
    vector<vector<int>> dir = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    bool isValid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
        vis[si][sj] = true;
        if (si == 0 || si == n - 1 || sj == 0 || sj == m - 1) {
            flag = false;
        }
        for (int i = 0; i < 4; i++) {
            int x = si + dir[i][0];
            int y = sj + dir[i][1];
            if (isValid(x, y) && !vis[x][y] && grid[x][y] == 0) {
                vis[x][y] = true;
                dfs(x, y, grid);
            }
        }
    }

public:
    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == 0) {
                    flag = true;
                    dfs(i, j, grid);
                    if (flag) ans++;
                }
            }
        }
        return ans;
    }
};