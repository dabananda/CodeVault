#include <bits/stdc++.h>
using namespace std;
int main()
{
    int b, m, n, i, j, max = -1;
    cin >> b >> m >> n;
    int keyboard[m], usb[n];
    for (i = 0; i < m; i++) cin >> keyboard[i];
    for (i = 0; i < n; i++) cin >> usb[i];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (keyboard[i] + usb[j] <= b)
            {
                if (keyboard[i] + usb[j] >= max) max = keyboard[i] + usb[j];
            }
        }
    }
    cout << max << endl;
    return 0;
}
