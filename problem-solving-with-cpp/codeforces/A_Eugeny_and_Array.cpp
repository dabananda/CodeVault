// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com
// LinkedIn: https://www.linkedin.com/in/dabanandamitra/
// GitHub: https://github.com/dabananda
// Portfolio: https://dmitra.netlify.app/

#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

void solution(int c, int d) {
  int l, r;
  cin >> l >> r;
  int len = r - l + 1;
  int isLengthEven = len % 2 == 0;
  if (isLengthEven && c >= len / 2 && d >= len /2) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }
}

int main() {
  fastio;
  int n, m;
  cin >> n >> m;
  int len = n, c = 0, d = 0;
  while (n--) {
    int x;
    cin >> x;
    x == 1 ? c++ : d++;
  }
  while (m--) {
    solution(c, d);
  }
  return 0;
}