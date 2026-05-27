#include <bits/stdc++.h>

using namespace std;

vector<int> v[1001];

bool check(int src, int des) {
  for (int a : v[src]) {
    if (a == des) {
      return true;
    }
  }
  return false;
}

int main() {
  int n, e;
  cin >> n >> e;
  while (e--) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
  }
  int q;
  cin >> q;
  while (q--) {
    int src, des;
    cin >> src >> des;
    if (src == des) {
      cout << "YES" << endl;
    } else {
      bool ans = check(src, des);
      if (ans) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}