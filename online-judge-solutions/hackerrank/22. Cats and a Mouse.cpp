#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c1, c2, m, i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> c1 >> c2 >> m;
        if (abs(c2 - m) < abs(c1 - m)) cout << "Cat B" << endl;
        else if (abs(c2 - m) > abs(c1 - m)) cout << "Cat A" << endl;
        else cout << "Mouse C" << endl;
    }
    return 0;
}
