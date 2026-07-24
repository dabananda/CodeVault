#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string games;
    cin >> games;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if (games[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a == d)
    {
        cout << "Friendship" << endl;
    }
    else
    {
        if (a > d)
        {
            cout << "Anton" << endl;
        }
        else
        {
            cout << "Danik" << endl;
        }
    }

    return 0;
}
