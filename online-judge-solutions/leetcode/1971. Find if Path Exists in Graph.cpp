class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> v[n];
        for (int i = 0; i < edges.size(); i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        bool vis[200000] = {false};
        queue<int> q;
        q.push(source);
        vis[source] = true;
        while (!q.empty()) {
            int p = q.front();
            vis[p] = true;
            q.pop();
            for (int x : v[p]) {
                if (!vis[x]) {
                    q.push(x);
                    vis[x] = true;
                }
            }
        }
        return vis[destination];
    }
};