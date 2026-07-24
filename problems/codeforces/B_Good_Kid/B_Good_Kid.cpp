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
  vi v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int mini = v[0], index = 0, result = 1;
  for (int i = 1; i < n; i++) {
    if (v[i] < mini) {
      mini = v[i];
      index = i;
    }
  }
  v[index] = v[index] + 1;
  for (int i = 0; i < n; i++) {
    result = result * v[i];
  }
  cout << result << endl;
}
 
int main() {
  fastio;
  int testCase;
  cin >> testCase;
  while (testCase--) {
    solution();
  }
  cout << "\n";
  return 0;
}