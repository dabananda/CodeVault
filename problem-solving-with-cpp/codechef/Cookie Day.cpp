#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = INT_MAX;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if(arr[i] >= k) {
                flag = false;
                ans = min(ans, arr[i] % k);
            }
        }
        if (flag) {
            cout << "-1\n";
        } else {
            cout << ans << "\n";
        }
    }
}
