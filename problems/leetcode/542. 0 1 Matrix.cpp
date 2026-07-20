class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> d(n, vector<int>(m, INT_MAX));
        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    q.push({i, j});
                    d[i][j] = 0;
                }
            }
        }
        vector<pair<int, int>> dir = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int x = row + dir[i].first;
                int y = col + dir[i].second;
                if (x >= 0 && x < n && y >= 0 && y < m && d[x][y] > d[row][col] + 1) {
                    d[x][y] = d[row][col] + 1;
                    q.push({x, y});
                }
            }
        }
        return d;
    }
};
