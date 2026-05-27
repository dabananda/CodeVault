// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  ll n, m, in;
  cin >> n >> m;
  ll arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  queue<ll> q;
  ll ans, count = 0, current, end = n - 1;
  while (m--) {
    cin >> current;
    while (count != current) {
      if (end >= 0 && (q.empty() || (arr[end] >= q.front()))) {
        ans = arr[end];
        end--;
      } else {
        ans = q.front();
        q.pop();
      }
      q.push(ans / 2);
      count++;
    }
    cout << ans << endl;
  }
}

int main() {
  TLE;
  Solution();

  return 0;
}