#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d, m, i, j, result = 0;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++) cin >> array[i];
    cin >> d >> m;
    for (i = 0; i < n - m + 1; i++)
    {
        int sum = 0;
        for (j = i; j < i + m; j++) sum += array[j];
        if (sum == d) result++;
    }
    cout << result << endl;
}
