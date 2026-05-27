#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vll;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void Solution(int t) {
  // start coding from here
  ll n;
  bool flag = true;
  cin >> n;
  ll size = n;
  vll nums;
  while (n--) {
    ll x;
    cin >> x;
    nums.push_back(x);
  }
  sort(nums.begin(), nums.end());
  for (ll a = 0; a < size; a++) {
    if (nums[a] == nums[a + 1]) {
      flag = false;
      break;
    }
  }
  flag ? cout << "YES\n" : cout << "NO\n";
}

int main() {
  TLE;
  ll test_case, t = 1;
  cin >> test_case;
  while (test_case--) {
    Solution(t++);
  }

  return 0;
}