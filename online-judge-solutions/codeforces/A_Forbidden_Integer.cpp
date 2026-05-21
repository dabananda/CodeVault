// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
// Problem link:

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define em emplace_back
#define ef emplace_front
#define pb push_back
#define pf push_front
#define nl "\n"
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solution() {
  int n, k, x;
  cin >> n >> k >> x;

  if (x != 1) {
    cout << "YES" << endl;
    cout << n << endl;
    for (int j = 0; j < n; j++) {
      cout << 1 << " ";
    }
    cout << endl;
  } else if (k == 1 || (k == 2 && n % 2 == 1)) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
    cout << n / 2 << endl;
    vector<int> values;
    if (n % 2 == 1) {
      values.push_back(3);
    } else {
      values.push_back(2);
    }
    for (int j = 1; j < n / 2; j++) {
      values.push_back(2);
    }
    for (int value : values) {
      cout << value << " ";
    }
    cout << endl;
  }
}

int main() {
  Dabananda_Mitra;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    solution();
  }
  return 0;
}