/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * Created: 2024-09-26 16:06:08
 *
 */

#include <bits/stdc++.h>
 
using namespace std;

void Dabananda_Mitra() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

/*
2 3 10
2 3 10
2 3 10
1 3 10
3 3 10
*/

int main() {
  Dabananda_Mitra();
  long long int t;
  cin >> t;
  while (t--) {
    long long int n;
    cin >> n;
    bool flag = true;
    for (int d = 0; d < n; d++) {
      long long int bm, bq, br;
      long long int lm, lq, lr;
      long long int cm, cq, cr;
      long long int sm, sq, sr;
      long long int am, aq, ar;
      cin >> bm >> bq >> br;
      if (bm != 2 || bq != 3 || br != 10) flag = false;
      cin >> lm >> lq >> lr;
      if (lm != 2 || lq != 3 || lr != 10) flag = false;
      cin >> cm >> cq >> cr;
      if (cm != 2 || cq != 3 || cr != 10) flag = false;
      cin >> sm >> sq >> sr;
      if (sm != 1 || sq != 3 || sr != 10) flag = false;
      cin >> am >> aq >> ar;
      if (am != 3 || aq != 3 || ar != 10) flag = false;
    }
    if (flag) cout << "Consistent\n";
    else cout << "Inconsistent\n";
  }

  return 0;
}