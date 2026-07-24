#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string word;
    cin >> word;
    vector<char> newWord;
    if (word.length() < 3) {
      newWord.push_back(word[0]);
      newWord.push_back(word[1]);
    } else {
      newWord.push_back(word[0]);
      for (int i = 1; i < word.length(); i++) {
        if (i % 2 != 0) {
          newWord.push_back(word[i]);
        }
      }
    }
    for (int i = 0; i < newWord.size(); i++) {
      cout << newWord[i];
    }
    cout << endl;
  }

  return 0;
}