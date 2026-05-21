#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int length = s.length();
    int upper = 0, x = length / 2;
    for (int i = 0; i < length; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    if (upper > x)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << "\n";
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << "\n";
    }

    return 0;
}