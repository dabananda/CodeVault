/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
*/

// Problem link: https://codeforces.com/problemset/problem/1665/B
// Time complexity: O(n)
// Space complexity: O(n)

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define si set<int>
#define sc set<char>
#define mii map<int, int>
#define mci map<char, int>
#define msi map<string, int>
#define em emplace_back
#define ef emplace_front
#define pb push_back
#define pf push_front
#define nl "\n"
#define sortVec(v) sort(v.begin(), v.end())
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)

void Dabananda_Mitra() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solution() {
  int n;
  cin >> n;

  vector<int> nums(n);
  map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    mpp[nums[i]]++;
  }

  int maxNum = 0;
  for (auto it = mpp.begin(); it != mpp.end(); ++it) {
    maxNum = max(maxNum, it->second); 
  }

  int ans = 0;
  while (maxNum < n) {
    int diff = min(n - maxNum, maxNum);
    ans += 1 + diff;
    maxNum += diff;
  }
  cout << ans << nl;
}

int main() {
  Dabananda_Mitra();
  int t;
  cin >> t;
  while (t--) {
    solution();
  }
  return 0;
}