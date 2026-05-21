class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), fresh = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) fresh++;
                else if (grid[i][j] == 2) {
                    vis[i][j] = 2;
                    q.push({{i, j}, 0});
                }
            }
        }
        int time = 0, cnt = 0;
        int row[] = {-1, 0, 1, 0};
        int col[] = {0, 1, 0, -1};
        while (!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            time = max(time, t);
            for (int i = 0; i < 4; i++) {
                int nr = r + row[i], nc = c + col[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && vis[nr][nc] == 0 && grid[nr][nc] == 1) {
                    q.push({{nr, nc}, t + 1});
                    vis[nr][nc] = 2;
                    cnt++;
                }
            }
        }
        return fresh == cnt ? time : -1;
    }
};