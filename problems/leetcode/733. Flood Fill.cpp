class Solution {
private:
    int n, m, primaryColor;
    vector<vector<int>> ans;
    vector<vector<int>> dir = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    void dfs(vector<vector<int>>& image, int row, int col, int color) {
        ans[row][col] = color;
        for (int i = 0; i < 4; i++) {
            int x = row + dir[i][0], y = col + dir[i][1];
            if (x >= 0 && x < n && y >= 0 && y < m &&
                image[x][y] == primaryColor && ans[x][y] != color) {
                dfs(image, x, y, color);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        n = image.size(), m = image[0].size();
        ans = image;
        primaryColor = image[sr][sc];
        dfs(image, sr, sc, color);
        return ans;
    }
};