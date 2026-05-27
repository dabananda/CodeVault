#include <iostream>

using namespace std;

int main() {
    long long int a, b;
    cin >> a >> b;
    long long int r = a / b;
    if (a % b != 0) r++;
    cout << r << "\n";
    return 0;
}