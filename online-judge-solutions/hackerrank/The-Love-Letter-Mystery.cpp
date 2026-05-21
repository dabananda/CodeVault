#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int t = 0; t < n; t++) {
        string s;
        cin >> s;

        int len = s.length();
        int x = len - 1, count = 0, flag = 0;

        for(int i = 0; ; i++) {
            if(s[i] == s[x - i]) {
                flag++;
            } else {
                flag = 0;
                if(s[i] > s[x - i]) {
                    s[i] = static_cast<char>(s[i] - 1);
                } else {
                    s[x - i] = static_cast<char>(s[x - i] - 1);
                }
                count++;
            }
            if(flag == len) {
                break;
            } else if(i == len - 1) {
                i = 0;
            }
        }
        cout << count << endl;
    }

    return 0;
}