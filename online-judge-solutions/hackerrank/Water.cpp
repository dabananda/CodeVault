/**
 * Author: Dabananda Mitra
 * Email: imdmitra@gmail.com
 * GitHub: https://github.com/dabananda
 * Created: 2024-10-07 22:53:15
 * Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-05/challenges/water-4-1
 *
 */

#include <bits/stdc++.h>

using namespace std;

pair<int, int> calc(vector<int>& v) {
  int n = v.size();
  int mH = -1, sMH = -1;
  int maxIndex = -1, secondMaxIndex = -1;
  for (int i = 0; i < n; i++) {
    if (v[i] > mH) {
      sMH = mH, secondMaxIndex = maxIndex;
      mH = v[i], maxIndex = i;
    } else if (v[i] > sMH) {
      sMH = v[i], secondMaxIndex = i;
    }
  }
  pair<int, int> ans;
  ans.first = min(maxIndex, secondMaxIndex), ans.second= max(maxIndex, secondMaxIndex);
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    pair<int, int> p = calc(v);
    cout << p.first << " " << p.second << endl;
  }

  return 0;
}