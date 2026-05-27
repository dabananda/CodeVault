#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, z;
    cin >> n >> z;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> maxi;
    for (int i = 0; i < n; i++) {
      int x = max((z & arr[i]), (z | arr[i]));
      maxi.push_back(x);
    }
    int maximum = maxi[0];
    for (int i = 0; i < n; i++) {
      if (maximum < maxi[i]) maximum = maxi[i];
    }
    cout << maximum << endl;
  }

  return 0;
}