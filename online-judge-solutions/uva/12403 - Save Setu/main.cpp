#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T, total = 0, tk;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string s, s_new;
        cin.ignore();
        getline(cin, s);
        if (s.length() > 6)
        {
            for (int j = 6; j < s.length(); j++)
            {
                s_new += s[j];
            }
            tk = stoi(s_new);
            total = total + tk;
        }
        else
        {
            cout << total << endl;
        }
    }

    return 0;
}
