/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-09-27 18:55:59
 * Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-05/challenges/cycle-of-edges
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi pair<int, int>
#define pb push_back
#define nl "\n"

const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int parent[N];
int cycle = 0;

void dfs(int src) {
  vis[src] = true;
  for (int x : adj[src]) {
    if (vis[x] && parent[src] != x) {
      cycle++;
    }
    if (!vis[x]) {
      parent[x] = src;
      dfs(x);
    }
  }
}

void solution() {
  int n, e;
  cin >> n >> e;
  while (e--) {
    int a, b;
    cin >> a >> b;
    adj[a].pb(b);
    adj[b].pb(a);
  }
  memset(vis, false, sizeof(vis));
  memset(parent, -1, sizeof(parent));
  dfs(1);
  cout << cycle / 2 << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solution();
  return 0;
}
