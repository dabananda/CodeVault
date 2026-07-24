class Solution {
private:
    int n, m;
    bool flag;
    bool vis[500][500] = {false};
    vector<vector<int>> dir = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    bool isValid(int i, int j) { return i >= 0 && i < n && j >= 0 && j < m; }

    void dfs(int si, int sj, vector<vector<int>>& grid1,
             vector<vector<int>>& grid2) {
        vis[si][sj] = true;
        if (grid1[si][sj] == 0) {
            flag = false;
        }
        for (int i = 0; i < 4; i++) {
            int x = si + dir[i][0];
            int y = sj + dir[i][1];
            if (isValid(x, y) && !vis[x][y] && grid2[x][y] == 1) {
                vis[x][y] = true;
                dfs(x, y, grid1, grid2);
            }
        }
    }

public:
    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2) {
        n = grid2.size(), m = grid2[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid2[i][j] == 1) {
                    flag = true;
                    dfs(i, j, grid1, grid2);
                    if (flag)
                        ans++;
                }
            }
        }
        return ans;
    }
};