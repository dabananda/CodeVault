#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int x = 0; x < t; x++) {
        int m, n;
        cin >> m >> n;
        int flavor[n];
        for (int i = 0; i < n; i++) {
            cin >> flavor[i];
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (flavor[i] + flavor[j] == m) {
                    cout << i + 1 << " " << j + 1 << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}