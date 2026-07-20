#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        string decoded;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            decoded += s[i] - 7;
        }
        cout << decoded << endl;
    }

    return 0;
}