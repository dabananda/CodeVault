/**
 * Title: 200. Number of Islands
 * Link:https://leetcode.com/problems/number-of-islands/description/
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-09-12 16:17:00
 *
 */

class Solution {
 private:
  void bfs(int row, int col, vector<vector<char>>& grid,
           vector<vector<int>>& vis) {
    int n = grid.size(), m = grid[0].size();
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    while (!q.empty()) {
      int row = q.front().first, col = q.front().second;
      q.pop();
      for (pair<int, int> dir : directions) {
        int nrow = row + dir.first, ncol = col + dir.second;
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
            grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
          vis[nrow][ncol] = 1;
          q.push({nrow, ncol});
        }
      }
    }
  }

 public:
  int numIslands(vector<vector<char>>& grid) {
    int n = grid.size(), m = grid[0].size();
    int count = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (!vis[i][j] && grid[i][j] == '1') {
          count++;
          bfs(i, j, grid, vis);
        }
      }
    }
    return count;
  }
};
