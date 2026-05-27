#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int len = s1.length();
    string sn[len];
    for (int i = 0; i < len; i++)
    {
        if (s1[i] == s2[i])
        {
            sn[i] = "0";
        }
        else
        {
            sn[i] = "1";
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << sn[i];
    }
    cout << "\n";

    return 0;
}