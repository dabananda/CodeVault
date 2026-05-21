#include <bits/stdc++.h>

using namespace std;

int main() {
  string wordObject;
  getline(cin, wordObject);

  int size = wordObject.size(), count = 0;

  for (int i = 0; i < size; i++) {
    if (isalpha(wordObject[i])) {
      bool flag = true;
      for (int j = 0; j < i; j++) {
        if (wordObject[j] == wordObject[i]) {
          flag = false;
          break;
        }
      }
      if (flag) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}