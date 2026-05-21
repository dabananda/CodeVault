/**
 * Title: Knight Moves
 * Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-05/challenges/knight-moves-2
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-09-13 23:25:48
 *
 */

#include <bits/stdc++.h>

using namespace std;

int dir[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

bool isValid(int x, int y, int n, int m) {
  if (x >= 0 && y >= 0 && x < n && y < m) {
    return true;
  }
  return false;
}

int bfs(int n, int m, int ki, int kj, int qi, int qj) {
  if (ki == qi && kj == qj) {
    return 0;
  }
  queue<pair<pair<int, int>, int>> q;
  q.push({{ki, kj}, 0});
  bool vis[100][100] = {false};
  vis[ki][kj] = true;
  while (!q.empty()) {
    pair<pair<int, int>, int> p = q.front();
    q.pop();
    int x = p.first.first, y = p.first.second;
    int count = p.second;
    for (int i = 0; i < 8; i++) {
      int newX = x + dir[i][0], newY = y + dir[i][1];
      if (isValid(newX, newY, n, m) && !vis[newX][newY]) {
        if (newX == qi && newY == qj) {
          return count + 1;
        }
        vis[newX][newY] = true; 
        q.push({{newX, newY}, count + 1});
      }
    }
  }
  return -1; 
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int ki, kj, qi, qj;
    cin >> ki >> kj >> qi >> qj;
    cout << bfs(n, m, ki, kj, qi, qj) << endl;
  }

  return 0;
}