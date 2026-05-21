#include <iostream>

using namespace std;

int main() {
    int n, count = 1;
    cin >> n;
    int magnets[n];
    for (int i = 0; i < n; i++) {
        cin >> magnets[i];
    }
    int checker = magnets[0];
    for (int i = 0; i < n; i++) {
        if (checker != magnets[i]) {
            checker = magnets[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
