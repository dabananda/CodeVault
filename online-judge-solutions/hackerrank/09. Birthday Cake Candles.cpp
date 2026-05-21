#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count = 0;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];

    }
    int maximum = array[0];
    for (i = 0; i < n; i++)
    {
        if (maximum < array[i]) maximum = array[i];
    }
    for (i = 0; i < n; i++)
    {
        if (maximum == array[i]) count++;
    }
    cout << count << endl;
    return 0;
}
