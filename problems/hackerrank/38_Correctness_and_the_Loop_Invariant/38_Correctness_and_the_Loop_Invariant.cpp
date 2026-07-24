#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int m = sizeof(array) / sizeof (array[0]);
    sort(array, array + m);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
