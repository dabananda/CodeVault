#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++) cin >> array[i];
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            int raise = (pow(2, array[i] / 2) * 2) - 1;
            cout << raise << endl;
        }
        else
        {
            int raise = ((pow(2, (array[i] - 1) / 2) * 2) - 1) * 2;
            cout << raise << endl;
        }
    }
    return 0;
}
