#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int len = s.length(), x = 0;
    string ch[len];
    for (int i = 0; i < len; i++) {
        if (s[i] == '.') {
            ch[x] = '0';
            x++;
        }
        else if (s[i] == '-' && s[i + 1] == '.') {
            ch[x] = '1';
            i++;
            x++;
        }
        else if (s[i] == '-' && s[i + 1] == '-') {
            ch[x] = '2';
            i++;
            x++;
        }
    }
    for (int i = 0; i < len; i++) {
        cout << ch[i];
    }
    cout << "\n";

    return 0;
}
