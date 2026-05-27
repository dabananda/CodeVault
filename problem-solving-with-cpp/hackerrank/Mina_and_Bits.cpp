#include <bits/stdc++.h>

using namespace std;
 
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long int n, count = 0;
    cin >> n;
    for (long long int i = 1; i <= n; i = (i * 2) + 1) {
      count++;
    }
    cout << count << endl;
  }

  return 0;
}