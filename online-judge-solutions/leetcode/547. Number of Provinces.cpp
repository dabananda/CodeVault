class Solution {
private:
    void dfs(int n, bool v[], vector<vector<int>> &isConnected) {
        v[n] = true;
        for (int i = 0; i < isConnected.size(); i++) {
            if (v[i] == false && isConnected[n][i] == true) {
                dfs(i, v, isConnected);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int count = 0;
        bool v[n];
        memset(v, false, sizeof(v));
        for (int i = 0; i < n; i++) {
            if (v[i] == false) {
                count++;
                dfs(i, v, isConnected);
            }
        }
        return count;
    }
};