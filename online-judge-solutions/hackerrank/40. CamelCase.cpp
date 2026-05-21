#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentense;
    int count = 1;
    cin >> sentense;
    int length = sentense.length();
    for (int i = 0; i < length; i++)
    {
        if (sentense[i] >= 65 && sentense[i] <= 90)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
