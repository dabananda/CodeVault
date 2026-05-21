/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-09-27 20:13:30
 * Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-05/challenges/maze-19
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi pair<int, int>
#define pb push_back
#define nl "\n"

const int N = 1e3+5;
int n, m;
char graph[N][N];
bool vis[N][N];
vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
map<pair<int, int>, pair<int, int>> par;

bool isValid(int x, int y) {
  return (x >= 0 && x < n && y >= 0 && y < m && graph[x][y] != '#');
}

bool bfs(int si, int sj) {
  vis[si][sj] = true;
  queue<pair<int, int>> q;
  q.push({si, sj});
  while (!q.empty()) {
    pair<int, int> node = q.front();
    q.pop();
    if (graph[node.first][node.second] == 'D') {
      return true;
    }
    for (int i = 0; i < 4; i++) {
      int x = node.first + dir[i].first;
      int y = node.second + dir[i].second;
      if (isValid(x, y) && !vis[x][y]) {
        vis[x][y] = true;
        q.push({x, y});
        par[{x, y}] = {node.first, node.second};
      }
    }
  }
  return false;
}

void solution() {
  cin >> n >> m;
  int si, sj, di, dj;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> graph[i][j];
      if (graph[i][j] == 'R') {
        si = i, sj = j;
      } else if (graph[i][j] == 'D') {
        di = i, dj = j;
      }
    }
  }
  if (bfs(si, sj)) {
    int x = di, y = dj;
    while (x != si || y != sj) {
      if (graph[x][y] != 'D') graph[x][y] = 'X';
      pair<int, int> parent = par[{x, y}];
      x = parent.first;
      y = parent.second;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << graph[i][j];
    }
    cout << nl;
  }
  cout << nl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solution();
  return 0;
}