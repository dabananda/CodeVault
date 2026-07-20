#include <bits/stdc++.h>

using namespace std;

void bfs(int src, vector<int> v[], bool vis[], int dis[]) {
  vis[src] = true;
  dis[src] = 0;
  queue<int> q;
  q.push(src);
  while (!q.empty()) {
    int node = q.front();
    q.pop();
    for (int x : v[node]) {
      if (vis[x] == false) {
        vis[x] = true;
        dis[x] = dis[node] + 1;
        q.push(x);
      }
    }
  }
}

int main() {
  int n, e;
  cin >> n >> e;
  vector<int> v[n];
  bool vis[n];
  int dis[n];
  fill(vis, vis + n, false);
  fill(dis, dis + n, -1);
  while (e--) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int x, y, k;
  cin >> x >> y >> k;
  bfs(x, v, vis, dis);
  if (dis[y] != -1 && dis[y] <= k * 2) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}