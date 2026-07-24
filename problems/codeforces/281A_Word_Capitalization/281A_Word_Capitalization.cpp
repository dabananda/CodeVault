#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    string word;
    getline(cin, word);
    int upper = word[0];
    if (islower(word[0]))
    {
        word[0] = toupper(upper);
        cout << word[0];
        for (int i = 1; i < word.length(); i++)
        {
            cout << word[i];
        }
    }
    else
    {
        cout << word << endl;
    }
    
    return 0;
}
