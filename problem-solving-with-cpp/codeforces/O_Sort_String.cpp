#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<int> count(26, 0);
  for (char c : S) {
    count[c - 'a']++;
  }
  string sortedString;
  for (int i = 0; i < 26; ++i) {
    while (count[i] > 0) {
      sortedString += (char)(i + 'a');
      count[i]--;
    }
  }
  cout << sortedString << endl;

  return 0;
}
