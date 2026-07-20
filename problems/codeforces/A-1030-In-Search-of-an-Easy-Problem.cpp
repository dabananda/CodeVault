#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int problems[n];
    bool isEasy = true;
    for (int i = 0; i < n; i++) {
        cin >> problems[i];
        if (problems[i] == 1) {
            isEasy = false;
        }
    }
    isEasy ? cout << "EASY\n" : cout << "HARD\n";

    return 0;
}
