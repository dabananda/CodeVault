#include <iostream>

using namespace std;

int main() {
    int n, h, width = 0;
    cin >> n >> h;
    int heights[n];
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
        if (heights[i] > h) {
            width += 2;
        } else {
            width++;
        }
    }
    cout << width << endl;

    return 0;
}
