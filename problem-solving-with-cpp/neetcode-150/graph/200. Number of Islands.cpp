class Solution {
    void bfs(int n, int m, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        int a = grid.size(), b = grid[0].size();
        vis[n][m] = 1;
        queue<pair<int, int>> q;
        q.push({n, m});
        vector<pair<int, int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while (!q.empty()) {
            int r = q.front().first, c = q.front().second;
            q.pop();
            for (pair<int, int> d: dirs) {
                int nr = r + d.first, nc = c + d.second;
                if (nr >= 0 && nr < a && nc >= 0 && nc < b && !vis[nr][nc] && grid[nr][nc] == '1') {
                    q.push({nr, nc});
                    vis[nr][nc] = 1;
                }
            }

        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
         int n = grid.size(), m = grid[0].size(), ans = 0;
         vector<vector<int>> vis(n, vector<int>(m, 0));
         for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == '1') {
                    ans++;
                    bfs(i, j, grid, vis);
                }
            }
         }
         return ans;
    }
};