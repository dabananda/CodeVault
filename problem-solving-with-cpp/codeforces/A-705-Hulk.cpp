#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string sentence[2] = {"I love", "I hate"}, conjunction[2] = {"it", "that"}, result = "";
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            result = result + sentence[0] + " ";
            if (i + 1 == n) {
                result = result + conjunction[0];
            } else {
                result = result + conjunction[1] + " ";
            }
        } else {
            result = result + sentence[1] + " ";
            if (i + 1 == n) {
                result = result + conjunction[0];
            } else {
                result = result + conjunction[1] + " ";
            }
        }
    }
    cout << result << endl;

    return 0;
}
