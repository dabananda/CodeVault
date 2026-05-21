#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string username;
    cin >> username;
    int count = 0;
    for (int i = 0; i < username.length() - 1; i++)
    {
        for (int j = i + 1; j < username.length(); j++)
        {
            if (username[i] == username[j])
            {
                count++;
                break;
            }
        }
    }
    int result = username.length() - count;
    if (result % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}