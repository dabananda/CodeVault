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

bool is_vowel(char letter) {
  letter = tolower(letter);
  return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'y');
}

void solution() {
  // start code from here
  string s;
  getline(cin, s);
  int len = s.length(), index = -1;
  for (int i = 0; i < len; i++) {
    isalpha(s[i]) ? index = i : 0;
  }
  is_vowel(s[index]) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
  fastio;
  // int testCase;
  // cin >> testCase;
  // while (testCase--) {
  solution();
  // }
  // cout << "\n";
  return 0;
}