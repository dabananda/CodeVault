#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, v1, x2, v2, i;
    cin >> x1 >> v1 >> x2 >> v2;
    if (x2 > x1 && v2 > v1) cout << "NO" << endl;
    else if (v1 == v2) cout << "NO" << endl;
    else
    {
        if ((x1 - x2) % (v2 - v1) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
