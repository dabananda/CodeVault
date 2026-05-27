class Solution {
private:
    int count, n, m;
    bool vis[50][50] = {false};
    vector<vector<int>> dir = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    bool isValid(int i, int j) {
        return i >= 0 && i < n && j >= 0 && j < m;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
        vis[si][sj] = true;
        count = count + 1;
        for (int i = 0; i < 4; i++) {
            int x = si + dir[i][0];
            int y = sj + dir[i][1];
            if (isValid(x, y) && !vis[x][y] && grid[x][y] == 1) {
                dfs(x, y, grid);
            }
        }
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if(!vis[i][j] && grid[i][j] == 1) {
                    count = 0;
                    dfs(i, j, grid);
                    ans = max(ans, count);
                }
            }
        }
        return ans;
    }
};