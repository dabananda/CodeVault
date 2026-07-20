// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define all(v) v.begin(), v.end()
#define tle ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solution() {
  int n;
  cin >> n;
  vi v1(n), v2(n);
  for (int i = 0; i < n; i++) cin >> v1[i];
  v2 = v1;
  sort(all(v1));
  bool flag = true;
  for (int i = 0; i < n; i++) {
    if (v1[i] % 2 != v2[i] % 2) {
      flag = false;
      break;
    }
  }
  flag ? cout << "YES\n" : cout << "NO\n";
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