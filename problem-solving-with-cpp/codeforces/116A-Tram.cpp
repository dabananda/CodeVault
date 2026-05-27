#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int passengers[n][2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> passengers[i][j];
        }
    }
    for (int i = 0; i < n - 1; i++) {
        passengers[i + 1][1] = (passengers[i][1] - passengers[i + 1][0]) + passengers[i + 1][1];
    }
    int max = passengers[1][1];
    for (int i = 1; i < n; i++) {
        if (passengers[i][1] > max) {
            max = passengers[i][1];
        }
    }
    if (max > 2) {
        cout << max << "\n";
    }
    else {
        int x = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                if (passengers[i][j] > x) {
                    x = passengers[i][j];
                }
            }
        }
        cout << x << "\n";
    }

    return 0;
}
