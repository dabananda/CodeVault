#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count = 0;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++) cin >> array[i];
    int s = sizeof(array) / sizeof(array[0]);
    sort(array, array + s);
    for (i = 0; i < n - 1; i++)
    {
        if (i < n && array[i] == array[i + 1])
        {
            count++;
            i += 1;
        }
    }
    cout << count << endl;
    return 0;
}
