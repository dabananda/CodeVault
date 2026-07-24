/**
 * Title: Can Go
 * Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-05/challenges/can-go
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-09-13 13:23:56
 *
 */

#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 1;
const int N = 1001;
vector<pair<int, int>> adj[N];
int dis[N];

class comp {
 public:
  bool operator()(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
  }
};

void dijkstra(int src, int n) {
  priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;
  dis[src] = 0;
  pq.push({src, 0});
  while (!pq.empty()) {
    pair<int, int> p = pq.top();
    int node = p.first;
    int cd = p.second;
    pq.pop();
    for (pair<int, int> a : adj[node]) {
      int nextNode = a.first;
      int cost = a.second;
      if (dis[node] + cost < dis[nextNode]) {
        dis[nextNode] = dis[node] + cost;
        pq.push({nextNode, dis[nextNode]});
      }
    }
  }
}

int main() {
  int n, e;
  cin >> n >> e;
  for (int i = 0; i < e; i++) {
    int a, b, w;
    cin >> a >> b >> w;
    adj[a].push_back({b, w});
  }
  fill(dis, dis + N, INF);
  int s;
  cin >> s;
  dijkstra(s, n);
  int t;
  cin >> t;
  while (t--) {
    int d, dw;
    cin >> d >> dw;
    if (dis[d] <= dw) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
