/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-09-27 19:32:12
 * Problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-05/challenges/area-of-component
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pi pair<int, int>
#define pb push_back
#define nl "\n"

const int N = 1e3 + 5;
char mat[N][N];
bool vis[N][N];
int n, m;
int ans = INT_MAX, cnt = 0;
vector<pair<int, int>> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isValid(int x, int y) {
  return (x >= 0 && x < n && y >= 0 && y < m);
}

void dfs(int si, int sj) {
  vis[si][sj] = true;
  cnt++;
  for (int i = 0; i < 4; i++) {
    int x = si + dir[i].first;
    int y = sj + dir[i].second;
    if (isValid(x, y) && !vis[x][y] && mat[x][y] != '-') {
      dfs(x, y);
    }
  }
}

void solution() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mat[i][j];
    }
  }
  memset(vis, false, sizeof(vis));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (!vis[i][j] && mat[i][j] != '-') {
        cnt = 0;
        dfs(i, j);
        ans = min(ans, cnt);
      }
    }
  }
  if (ans == INT_MAX) {
    cout << -1 << nl;
  } else {
    cout << ans << nl;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  solution();

  return 0;
}
