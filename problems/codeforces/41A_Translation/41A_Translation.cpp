#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int length = s.length();
    int count = 0, j = length - 1;
    for (int i = 0; i < length; i++, j--)
    {
        if (s[i] == t[j])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if (count == length)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
