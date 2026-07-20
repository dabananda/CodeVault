// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define tle ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solution() {
  int n, m, k, h;
  cin >> n >> m >> k >> h;
  vi v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  sort(all(v));
  vi diff(n);
  for (int i = 0; i < n; i++) diff[i] = abs(v[i] - h);
  int cnt = 0, maxDiff = m*k - k;
  for (int i = 0; i < n; i++) {
    if (diff[i] % k == 0 && (diff[i] <= maxDiff && diff[i] >= k)) cnt++;
  }
  cout << cnt << "\n";
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