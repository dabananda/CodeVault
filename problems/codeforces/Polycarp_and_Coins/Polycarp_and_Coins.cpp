#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        int x = arr[i] / 3;
        int y = arr[i] % 3;
        if(y == 1) {
            cout << x + 1 << " " << x << endl;
        } else if(y == 2) {
            cout << x << " " << x + 1 << endl;
        } else {
            cout << x << " " << x << endl;
        }
    }

    return 0;
}