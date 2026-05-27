class Solution {
private:
    bool dfs(int node, int color, vector<vector<int>>& graph, int colors[]) {
        colors[node] = color;
        for (auto it : graph[node]) {
            if (colors[it] == -1) {
                if (dfs(it, !color, graph, colors) == false) {
                    return false;
                }
            } else if (colors[it] == color) {
                return false;
            }
        }
        return true;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        int colors[100];
        fill(colors, colors + 100, -1);
        for (int i = 0; i < n; i++) {
            if (colors[i] == -1) {
                if (dfs(i, 0, graph, colors) == false) {
                    return false;
                }
            }
        }
        return true;
    }
};