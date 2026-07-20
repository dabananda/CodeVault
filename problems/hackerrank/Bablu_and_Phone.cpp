#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
      string s, z;
      int x, sum = 0;
      cin >> s;
      for (int i = 0; i < s.length() - 1; i++) {
        z.push_back(s[i]);
      }
      x = stoi(z);
      if (x < 60) {
        sum = (60 - x) + (20 * 2) + (20 * 3);
      } else if (x < 80) {
        sum = (80 - x) * 2 + (20 * 3);
      } else {
        sum = (100 - x) * 3;
      }
      cout << sum << " minutes" << endl;
    }

    return 0;
}
