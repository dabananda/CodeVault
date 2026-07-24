#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int uniqueNumber = a[0], uniqueCount = 0, uniqueIndex;
    int repeatedNumber = a[0], repeatedCount = 0, repeatedIndex;
    for (int i = 0; i < n; i++) {
      if (a[i] == uniqueNumber) {
        uniqueCount++;
        uniqueIndex = i + 1;
      } else {
        repeatedCount++;
        repeatedIndex = i + 1;
      }
    }
    if (uniqueCount > repeatedCount) cout << repeatedIndex << endl;
    else cout << uniqueIndex << endl;
  }

  return 0;
}