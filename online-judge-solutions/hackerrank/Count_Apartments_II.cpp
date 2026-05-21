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

int dfs(int si, int sj) {
  visited[si][sj] = true;
  int roomCount = 1;
  for (int i = 0; i < 4; i++) {
    int ci = si + d[i].first;
    int cj = sj + d[i].second;
    if (valid(ci, cj) && !visited[ci][cj] && arr[ci][cj] == '.') {
      roomCount += dfs(ci, cj);
    }
  }
  return roomCount;
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  vector<int> totalRooms;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == '.' && !visited[i][j]) {
        int rooms = dfs(i, j);
        totalRooms.push_back(rooms);
      }
    }
  }
  if (totalRooms.empty()) {
    cout << 0 << endl;
  } else {
    sort(totalRooms.begin(), totalRooms.end());
    for (int rooms : totalRooms) {
      cout << rooms << " ";
    }
    cout << endl;
  }

  return 0;
}
