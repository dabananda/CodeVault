#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int fractions[n], sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> fractions[i];
        sum += fractions[i];
    }
    cout << double(sum) / n << endl;

    return  0;
}
