/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-09-27 19:19:28
 * Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-05/challenges/building-3-1
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi pair<int, int>
#define pb push_back
#define nl "\n"

const int N = 1e5 + 5;
int leader[N];
int groupSize[N];

class Edge {
 public:
  int u, v, w;
  Edge(int u, int v, int w) {
    this->u = u;
    this->v = v;
    this->w = w;
  }
};

void dsuInit(int n) {
  for (int i = 1; i <= n; i++) {
    leader[i] = -1;
    groupSize[i] = 1;
  }
}

int getLeader(int node) {
  if (leader[node] == -1) {
    return node;
  }
  int l = getLeader(leader[node]);
  leader[node] = l;
  return l;
}

void makeUnion(int x, int y) {
  int a = getLeader(x);
  int b = getLeader(y);
  if (groupSize[a] > groupSize[b]) {
    leader[b] = a;
    groupSize[a] += groupSize[b];
  } else {
    leader[a] = b;
    groupSize[b] += groupSize[a];
  }
}

bool comp(Edge a, Edge b) {
  return a.w < b.w;
}

void solution() {
  int n, e;
  cin >> n >> e;
  vector<Edge> edgeList;
  while (e--) {
    int u, v, w;
    cin >> u >> v >> w;
    edgeList.push_back(Edge(u, v, w));
  }
  sort(edgeList.begin(), edgeList.end(), comp);
  long long int cost = 0;
  dsuInit(n);
  for (Edge ed : edgeList) {
    int a = getLeader(ed.u);
    int b = getLeader(ed.v);
    if (a != b) {
      makeUnion(a, b);
      cost += ed.w;
    }
  }
  int mainLeader = getLeader(1);
  int flag = true;
  for (int i = 2; i <= n; i++) {
    if (getLeader(i) != mainLeader) {
      flag = false;
      break;
    }
  }
  if (flag) {
    cout << cost << endl;
  } else {
    cout << -1 << endl;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solution();

  return 0;
}
