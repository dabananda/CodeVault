#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int length = s.length();
        if (s == "1" || s == "4" || s == "78")
        {
            cout << "+\n";
        }
        else if (s[length - 2] == '3' && s[length - 1] == '5')
        {
            cout << "-\n";
        }
        else if (s[0] == '9' && s[length - 1] == '4')
        {
            cout << "*\n";
        }
        else if (s[0] == '1' && s[1] == '9' && s[2] == '0')
        {
            cout << "?\n";
        }
    }

    return 0;
}
