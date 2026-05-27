#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; 
    cin >> n;
    if (n % 2 != 0) {
      cout << "NO" << endl;
    } else {
      if ((n / 2) % 2 != 0) {
        cout << "NO" << endl;
      } else {
        vector<int> even;
        int evenSum = 0, oddSum = 0, oddArr[n / 2], j = 0;
        bool flag;
        for (int i = 2; i <= n; i += 2) {
          even.push_back(i);
          evenSum += i;
        }
        for (int i = 1; i < n - 1; i += 2) {
          oddArr[j] = i;
          oddSum += i;
          j++;
        }
        for (int i = n + 1; ; i += 2) {
          if (oddSum + i > evenSum) {
            flag = false;
            break;
          }
          if (oddSum + i == evenSum) {
            oddArr[j] = i;
            flag = true;
            break;
          }
        }
        if (flag) {
          cout << "YES" << endl;
          for (int i = 0; i < n / 2; i++) {
            cout << even[i] << " ";
          }
          for (int i = 0; i < n / 2; i++) {
            cout << oddArr[i] << " ";
          }
          cout << endl;
        } else {
          cout << "NO" << endl;
        }
      }
    }
  }

  return 0;
}