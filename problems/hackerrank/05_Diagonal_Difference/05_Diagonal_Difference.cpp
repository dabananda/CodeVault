#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, d1 = 0, d2 = 0;
    cin >> n;
    int array[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> array[i][j];
            if (i == j) d1 = d1 + array[i][j];
            if (i + j == n - 1) d2 = d2 + array[i][j];
        }
    }
    int substraction = abs(d1 - d2);
    cout << substraction << endl;
    return 0;
}
