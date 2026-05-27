// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = b; i >= a; i--)
#define Dabananda_Mitra ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  int n;
  cin >> n;
  int arr[n];
  set<int> s;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    s.insert(arr[i]);
  }
  sort(arr, arr + n);
  if (s.size() == 1) cout << "Yes\n";
  else if (s.size() >= 3) cout << "No\n";
  else {
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] == arr[0]) cnt1++;
      if (arr[i] == arr[n - 1]) cnt2++;
    }
    if (cnt1 == cnt2 || abs(cnt1 - cnt2) == 1) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
}
 
int main() {
  Dabananda_Mitra;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    solution();
  }
  cout << "\n";
  return 0;
}