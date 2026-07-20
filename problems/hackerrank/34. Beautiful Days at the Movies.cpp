#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, k, count = 0;
    cin >> m >> n >> k;

    for (int i = m; i <= n; i++)
    {
        int number = i, reversed = 0;

        while (number != 0)
        {
            reversed = (reversed * 10) + (number % 10);
            number /= 10;
        }

        if (abs(i - reversed) % k == 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
