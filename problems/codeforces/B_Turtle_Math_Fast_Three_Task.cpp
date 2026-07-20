// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@gmail.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link:
// Time complexity: O() per test case
// Space complexity: O() per test case

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
  vector<int> a(n);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  int remainder = sum % 3;
  if (remainder == 0) {
    cout << "0\n";
  } else {
    int moves = 0;
    if (remainder == 1) {
      int cnt = 0;
      for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 1) {
          cnt++;
          break;
        }
      }
      if (cnt == 1) {
        moves = 1;
      } else {
        moves = 2;
      }
    } else if (remainder == 2) {
      moves = 1;
    }
    cout << moves << "\n";
  }
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