#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i, j, sum = 0, result = 0;
    cin >> n >> k;
    int array[n];
    for (i = 0; i < n; i++) cin >> array[i];
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum = array[i] + array[j];
            if (sum % k == 0) result++;
        }
    }
    cout << result << endl;
    return 0;
}
