#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n < 26) {
    cout << "NO" << endl;
  } else {
    string word;
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    sort(word.begin(), word.end());
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (word[i] != word[i + 1]) {
        count++;
      }
    }
    if (count == 26) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}