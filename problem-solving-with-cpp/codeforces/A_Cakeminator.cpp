// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define vi vector<int>
#define loop(i, a, b) for (int i = a; i < b; i++)
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
void solution() {
  int r, c;
  cin >> r >> c;
  string s;
  vi row(r, 0), col(c, 0);
  loop(i, 0, r) {
    cin >> s;
    loop(j, 0, c) {
      if (s[j] == 'S') {
        row[i] = 1, col[j] = 1;
      }
    }
  }
  int cakes = 0;
  loop(i, 0, r) {
    loop(j, 0, c) {
      if (row[i] == 0 || col[j] == 0) {
        cakes++;
      }
    }
  }
  cout << cakes << endl;
}
 
int main() {
  fastio;
  solution();
  return 0;
}