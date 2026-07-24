class Solution {
private:
    int n;
    int vis[10000] = {0};
    int pathVis[10000] = {0};
    int check[10000] = {0};
    vector<int> ans;

    bool dfs(int node, vector<vector<int>>& graph) {
        vis[node] = 1;
        pathVis[node] = 1;
        check[node] = 0;
        for (int it : graph[node]) {
            if (!vis[it]) {
                if (dfs(it, graph)) {
                    check[node] = 0;
                    return true;
                }
            } else if (pathVis[it]) {
                check[node] = 0;
                return true;
            }
        }
        check[node] = 1;
        pathVis[node] = 0;
        return false;
    }

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        n = graph.size();
        for (int i = 0; i < n; i++) {
            if (vis[i] == false) {
                dfs(i, graph);
            }
        }
        for (int i = 0; i < n; i++) {
            if (check[i] == 1) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};