/**
 * Title: Same Component
 * Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-05/challenges/same-component
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-09-13 11:50:23
 *
 */

#include <bits/stdc++.h>

using namespace std;

const int N = 1001;
int n, m, si, sj, di, dj;
char adj[N][N];
bool vis[N][N] = {false};

bool bfs() {
  vis[si][sj] = true;
  queue<pair<int, int>> q;
  q.push({si, sj});
  vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
  while (!q.empty()) {
    pair<int, int> p = q.front();
    int csi = p.first, csj = p.second;
    q.pop();
    for (pair<int, int> d : directions) {
      int row = csi + d.first, col = csj + d.second;
      if (row >= 0 && row < n && col >= 0 && col < m && adj[row][col] == '.' && !vis[row][col]) {
        if (row == di && col == dj) {
          return true;
        }
        vis[row][col] = true;
        q.push({row, col});
      }
    }
  }
  return false;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> adj[i][j];
    }
  }
  cin >> si >> sj;
  cin >> di >> dj;
  if (si == di && sj == dj) {
    cout << "YES" << endl;
  } else {
    cout << (bfs() ? "YES" : "NO") << endl;
  }

  return 0;
}