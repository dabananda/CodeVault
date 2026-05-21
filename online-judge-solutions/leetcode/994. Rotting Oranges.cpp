class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), fresh = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    fresh++;
                } else if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
            }
        }
        int maxTime = 0, rotten = 0;
        int dir[4][2] = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};
        while (!q.empty()) {
            pair<pair<int, int>, int> p = q.front();
            int row = p.first.first;
            int col = p.first.second;
            int time = p.second;
            q.pop();
            maxTime = max(maxTime, time);
            for (int i = 0; i < 4; i++) {
                int newRow = row + dir[i][0];
                int newCol = col + dir[i][1];
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m &&
                    vis[newRow][newCol] == 0 && grid[newRow][newCol] == 1) {
                    q.push({{newRow, newCol}, time + 1});
                    vis[newRow][newCol] = 2;
                    rotten++;
                }
            }
        }
        return (rotten == fresh) ? maxTime : -1;
    }
};