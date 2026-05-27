/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 18:16:15
Date          : 2026-02-18
Problem Link  : https://www.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/0
*/

class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> d(n, vector<int>(m, 0));
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && mat[i][j] == 1) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1;
                }
            }
        }
        vector<pair<int, int>> dir = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            d[row][col] = steps;
            for (int i = 0; i < 4; i++) {
                int x = row + dir[i].first;
                int y = col + dir[i].second;
                if (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y]) {
                    q.push({{x, y}, steps + 1});
                    vis[x][y] = 1;
                }
            }
        }
        return d;
    }
};