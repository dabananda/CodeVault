#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + x);

    long long sum = 0;
    for(int i = n - 1, j = 0; i >= 0, j < n; i--, j++) {
        sum = sum + (pow(2, j) * arr[i]);
    }

    cout << sum << endl;
    
    return 0;
}