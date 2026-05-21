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
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solution() {
  // start code from here
  int n;
  cin >> n;
  int *arr = new int[n];
  loop(i, 0, n) cin >> arr[i];
  int chest = 0, biceps = 0, back = 0;
  loop(i, 0, n) {
    if(i % 3 == 0) chest += arr[i];
    else if(i % 3 == 1) biceps += arr[i];
    else back += arr[i];
  }
  int maximum = max({chest, biceps, back});
  if (maximum == chest) cout << "chest";
  else if (maximum == biceps) cout << "biceps";
  else cout << "back";
}

int main() {
  fastio;
  // int testCase;
  // cin >> testCase;
  // while (testCase--) {
  solution();
  // }
  cout << "\n";
  return 0;
}