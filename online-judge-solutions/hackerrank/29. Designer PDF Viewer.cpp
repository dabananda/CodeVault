#include <bits/stdc++.h>
using namespace std;
int main()
{
    int alphabets[26], max = 0;
    for (int i = 0; i < 26; i++) cin >> alphabets[i];
    string word;
    cin >> word;
    int value[word.length()];
    for (int i = 0; i < word.length(); i++)
    {
        value[i] = word[i] - 97;
        if (alphabets[value[i]] > max) max = alphabets[value[i]];
    }
    cout << max * word.length() << endl;
    return 0;
}
