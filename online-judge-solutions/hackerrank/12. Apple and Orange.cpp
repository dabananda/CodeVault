#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, a, b, m, n, apple_count = 0, orange_count = 0, i;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    int apple[m], orange[n];
    for (i = 0; i < m; i++)
    {
        cin >> apple[i];
        if (apple[i] + a >= s && apple[i] + a <= t) apple_count++;
    }
    for (i = 0; i < n; i++)
    {
        cin >> orange[i];
        if (b + orange[i] <= t && b + orange[i] >= s) orange_count++;
    }
    cout << apple_count << endl;
    cout << orange_count << endl;
    return 0;
}
