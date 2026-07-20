// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define ll long long;
#define vi vector<int>;
#define all(v) v.begin(), v.end();
#define tle ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solution() {
  int n, mini = INT_MAX;
  bool flag = false;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = 1; i < n; i++) {
    if (v[i] < v[i - 1]) {
      flag = true;
      break;
    }
    if (v[i] - v[i - 1] < mini) {
      mini = v[i] - v[i - 1];
    }
  }
  if (flag) cout << "0\n";
  else cout << (mini / 2) + 1 << "\n";
}

int main() {
  tle;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    solution();
  }

  return 0;
}