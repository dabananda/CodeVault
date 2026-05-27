class Solution {
// bfs
//   bool detect(int src, vector<int> adj[], int vis[]) {
//       vis[src] = 1;
//       queue<pair<int, int>> q;
//       q.push({src, -1});
//       while (!q.empty()) {
//           int node = q.front().first;
//           int parent = q.front().second;
//           q.pop();
//           for (int i: adj[node]) {
//               if (!vis[i]) {
//                   vis[i] = 1;
//                   q.push({i, node});
//               } else {
//                   if (i != parent)
//                     return true;
//               }
//           }
//       }
//       return false;
//   }

    // dfs
    bool dfs(int node, int parent, vector<int> adj[], int vis[]) {
        vis[node] = 1;
        for (int i : adj[node]) {
            if (!vis[i]) {
                if (dfs(i, node, adj, vis))
                    return true;
            } else if (i != parent) {
                return true;
            }
        }
        return false;
    }

  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        vector<int> adj[V];
        for (auto &e : edges) {
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int vis[V] = {0};
        // bfs
        // for (int i = 0; i < V; i++) {
        //     if (!vis[i]) {
        //         if (detect(i, adj, vis))
        //             return true;
        //     }
        // }
        
        // dfs
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(i, -1, adj, vis))
                    return true;
            }
        }
        return false;
    }
};