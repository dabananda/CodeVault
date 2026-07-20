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

void dfs(int si, int sj) {
  visited[si][sj] = true;
  for (int i = 0; i < 4; i++) {
    int ci = si + d[i].first;
    int cj = sj + d[i].second;
    if (valid(ci, cj) && !visited[ci][cj] && arr[ci][cj] == '.') {
      dfs(ci, cj);
    }
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == '.' && !visited[i][j]) {
        dfs(i, j);
        count++;
      }
    }
  }
  cout << count << endl;

  return 0;
}
