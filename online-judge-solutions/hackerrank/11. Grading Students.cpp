#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] >= 38)
        {
            if ((array[i] + 1) % 5 == 0) array[i] = array[i] + 1;
            else if ((array[i] + 2) % 5 == 0) array[i] = array[i] + 2;
            else array[i] = array[i];
        }
        else array[i] = array[i];
    }
    for (i = 0; i < n; i++) cout << array[i] << endl;
    return 0;
}
