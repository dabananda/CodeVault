#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int t = s.length() / 3;
    int count = 0;
    for(int i = 0; i < t; i++) {
        int x = i * 3;
        if(s[x + 0] != 'S') {
            count++;
        }
        if(s[x + 1] != 'O') {
            count++;
        }
        if(s[x + 2] != 'S') {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}