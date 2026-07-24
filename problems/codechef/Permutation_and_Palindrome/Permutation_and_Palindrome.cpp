// Dabananda Mitra, CSE (2019-20), ISTT.
// Email: imdmitra@outlook.com

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

char GetChar(int n) {
  return char(n + 97);
}

void Solution() {
  string s;
  cin >> s;
  int len = s.length();
  map<char, vector<int>> m;
  for (int i = 0; i < len; i++) {
    m[s[i]].push_back(i);
  }
  int odd_counter = 0;
  for (int i = 0; i < 26; i++) {
    if(m[GetChar(i)].size() % 2 != 0) {
      odd_counter++;
    }
  }
  if (odd_counter > 1) {
    cout << "-1\n";
    return;
  }
  int arr[len], start = 0, end = len - 1;
  for (int i = 0; i < 26; i++) {
    char current_char = GetChar(i);
    for (int j = 0; j < m[current_char].size(); j += 2) {
      if (m[current_char].size() - j == 1) {
        arr[len / 2] = m[current_char][j];
        continue;
      }
      arr[start] = m[current_char][j];
      arr[end] = m[current_char][j + 1];
      start++, end--;
    }
  }
  for (int i = 0; i < len; i++) {
    cout << arr[i] + 1 << " ";
  }
  cout << "\n";
}

int main() {
  TLE;
  int test_case;
  cin >> test_case;
  while (test_case--) {
    Solution();
  }

  return 0;
}