#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string map;
    cin >> map;
    if (map[0] >= 'A' && map[0] <= 'Z') {
      cout << "NO" << endl;
    } else {
      int count = 0;
      for (int i = 0; i < map.length() - 1; i++) {
        for (int j = i + 1; j < map.length(); j++) {
          if (map[i] >= 'a' && map[i] <= 'z') {
            if (toupper(map[i]) == map[j]) {
              count++;
              break;
            }
          }
        }
      }
      if (count == 3) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}