#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i;
    cin >> n >> k;
    int height[n];
    for (i = 0; i < n; i++) cin >> height[i];
    int max = height[0];
    for (i = 0; i < n; i++)
    {
        if (height[i] > max) max = height[i];
    }
    if (max - k > 0) cout << max - k << endl;
    else cout << 0 << endl;
    return 0;
}
