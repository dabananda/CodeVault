/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 18:16:48
Date          : 2026-02-18
Problem Link  : https://www.geeksforgeeks.org/problems/number-of-provinces/0
*/

class Solution {
  private:
    void dfs(int n, vector<int> grid[], bool vis[]) {
        vis[n] = true;
        for (int x : grid[n]) {
            if (vis[x] == false) {
                dfs(x, grid, vis);
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        bool vis[V] = {false};
        vector<int> grid[V];
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (adj[i][j] == 1 && i != j) {
                    grid[i].push_back(j);
                    grid[j].push_back(i);
                }
            }
        }
        int count = 0;
        for (int i = 0; i < V; i++) {
            if (vis[i] == false) {
                count++;
                dfs(i, grid, vis);
            }
        }
        return count;
    }
};