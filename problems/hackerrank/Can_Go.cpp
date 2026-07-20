#include <bits/stdc++.h>

using namespace std;

int n, m;
char arr[1001][1001];
bool visited[1001][1001] = {{false}};

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j) {
  if (i < 0 || i >= n || j < 0 || j >= m) {
    return false;
  }
  return true;
}

bool dfs(int si, int sj) {
  if (arr[si][sj] == 'B') {
    return true;
  }
  visited[si][sj] = true;
  for (int i = 0; i < 4; i++) {
    int ci = si + d[i].first;
    int cj = sj + d[i].second;
    if (valid(ci, cj) && !visited[ci][cj] && arr[ci][cj] != '#') {
      if (dfs(ci, cj)) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int si = -1, sj = -1;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 'A') {
        si = i;
        sj = j;
      }
    }
  }
  if (si == -1 || sj == -1) {
    cout << "NO" << endl;
    return 0;
  }
  bool ans = dfs(si, sj);
  cout << (ans ? "YES" : "NO") << endl;

  return 0;
}
