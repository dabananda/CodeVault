#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k, count = 0;
        cin >> n >> k;
        int array[n];
        for (int j = 0; j < n; j++)
        {
            cin >> array[i];
            if (array[i] <= 0) count++;
        }
        if (count >= k) cout << "No" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
