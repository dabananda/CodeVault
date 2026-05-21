#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;

    if(n % 2 == 1 && n - p == 1) {
        cout << 0 << endl;
    } else {
        int x = p - 1;
        int y = n - p;

        if(x < y) {
            cout << p / 2 << endl;
        } else {
            if(y == 1) {
                cout << 1 << endl;
            } else {
                cout << (n - p) / 2 << endl;
            }
        }
    }

    return 0;
}