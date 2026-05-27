#include <iostream>
#include <string.h>

using namespace std;
 
int main()
{
    string s, word = "hello";
    cin >> s;
    int count = 0, point = 0;
    for (int i = 0; i < word.length(); i++)
    {
        for (int j = point; j < s.length(); j++)
        {
            if (word[i] == s[j])
            {
                count++;
                point = j + 1;
                break;
            }
        }
    }
    if (count == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
 
    return 0;
}
