#include <iostream>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int len = s.length(), count = 0, total_word = 0;
        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z')
            {
                count = 1;
            }
            else
            {
                total_word += count;
                count = 0;
            }
        }
        cout << total_word << "\n";
    }

    return 0;
}