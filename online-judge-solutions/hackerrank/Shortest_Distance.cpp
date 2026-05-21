/**
 * Title: Shortest Distance
 * Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-05/challenges/shortest-distance-2
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-09-13 22:44:47
 *
 */

#include <bits/stdc++.h>
#define ll long long int
#define INF LLONG_MAX

using namespace std;

int main() {
  ll n, e;
  cin >> n >> e;
  ll adj[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) {
        adj[i][j] = 0;
      } else {
        adj[i][j] = INF;
      }
    }
  }
  while (e--) {
    ll a, b, w;
    cin >> a >> b >> w;
    a--, b--;
    adj[a][b] = min(adj[a][b], w);
  }
  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (adj[i][k] != INF && adj[k][j] != INF) {
          adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
        }
      }
    }
  }
  int t;
  cin >> t;
  while (t--) {
    ll s, d;
    cin >> s >> d;
    s--, d--;
    if (adj[s][d] == INF) {
      cout << -1 << endl;
    } else {
      cout << adj[s][d] << endl;
    }
  }

  return 0;
}