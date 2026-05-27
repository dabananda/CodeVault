#include <bits/stdc++.h>

using namespace std;

void solution() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = 0; i < n; i++) {
    v[i] = v[i] % k;
    if (v[i] == 0) v[i] = k;
  }
  vector<int> vec(n);
  iota(vec.begin(), vec.end(), 0);
  stable_sort(vec.begin(), vec.end(), [&](int i, int j) {
    return v[i] > v[j];
  });
  for (auto x : vec) {
    cout << x + 1 << " ";
  }
  cout << endl;
}

int main() {
  int test_case;
  cin >> test_case;
  while (test_case--) {
    solution();
  }

  return 0;
}