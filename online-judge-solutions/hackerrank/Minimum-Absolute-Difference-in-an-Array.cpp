#include <iostream>
#include <algorithm>

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {
    TLE;
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int z = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + z);

    int min = abs(arr[0] - arr[1]);

    for(int i = 1; i < n - 1; i++) {
        if(arr[i + 1] - arr[i] < min) {
            min = arr[i + 1] - arr[i];
        }
    }
    cout << min << "\n";

    return 0;
}