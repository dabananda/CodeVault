#include <bits/stdc++.h>

using namespace std;

vector<int> v[100001];

int main() {
  int n, e;
  cin >> n >> e;
  while (e--) {
    int a, b;
    cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }
  int q;
  cin >> q;
  while (q--) {
    int src;
    cin >> src;
    vector<int> a;
    if (v[src].empty()) {
      cout << -1 << endl;
    } else {
      for (int x : v[src]) {
        a.push_back(x);
      }
      sort(a.begin(), a.end(), greater<int>());
      for (int x : a) {
        cout << x << " ";
      }
      cout << endl;
    }
  }

  return 0;
}