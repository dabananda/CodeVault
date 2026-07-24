#include <bits/stdc++.h>
using namespace std;

int maximizingXOR(int m, int n)
{
    int max = 0;
    for (int i = m; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if ((i ^ j) > max)
            {
                max = (i ^ j);
            }
        }
    }

    return max;
}

int main()
{
    int l, r;
    cin >> l >> r;
    int result = maximizingXOR(l, r);
    cout << result << endl;

    return 0;
}
