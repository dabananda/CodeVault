/*
Author        : Dabananda Mitra
Portfolio     : https://dmitra.netlify.app
Time          : 18:13:37
Date          : 2026-02-18
Problem Link  : https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/0
*/

class Solution {
  private:
    void dfs(int src, vector<int> adj[], bool vis[], vector<int> &l) {
        vis[src] = true;
        l.push_back(src);
        for (int x : adj[src]) {
            if (vis[x] == false) {
                dfs(x, adj, vis, l);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool vis[V] = {false};
        vector<int> l;
        dfs(0, adj, vis, l);
        return l;
    }
};