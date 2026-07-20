// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define TLE                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

void Solution() {
  int n1, n2, n3, in, loop1, loop2, cnt = 0;
  cin >> n1 >> n2 >> n3;
  loop1 = loop2 = n1 + n2 + n3;
  vi vec, list;
  while (loop1--) {
    cin >> in;
    vec.push_back(in);
  }
  sort(vec.begin(), vec.end());
  for (int i = 0; i < loop2; i++) {
    if (vec[i] == vec[i + 1]) {
      list.push_back(vec[i]);
      for (int j = i + 1; j < loop2; j++) {
        if (vec[i] != vec[j]) {
          i = j - 1;
          break;
        }
      }
    }
  }
  vi::iterator it;
  cout << list.size() << "\n";
  for (it = list.begin(); it != list.end(); it++) {
    cout << *it << "\n";
  }
}

int main() {
  TLE;
  Solution();
  return 0;
}