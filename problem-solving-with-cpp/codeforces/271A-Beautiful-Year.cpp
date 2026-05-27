#include <iostream>
#include <string>

using namespace std;

int main() {
    int year;
    cin >> year;
    while (true) {
        int count = 0;
        year = year + 1;
        string s = to_string(year);
        int len = s.length();
        for (int i = 0; i < len - 1; i++) {
            for (int j =  i + 1; j < len; j++) {
                if (s[i] != s[j]) {
                    //do nothing
                }
                else {
                    count++;
                }
            }
        }
        if (count == 0) {
            cout << year << "\n";
            break;
        }
        else {
            continue;
        }
    }

    return 0;
}
