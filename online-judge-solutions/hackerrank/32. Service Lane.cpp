#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i;
    cin >> m >> n;
    int width[m];
    for (i = 0; i < m; i++) cin >> width[i];
    for (i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        int minimum = width[start];
        for (int j = start; j <= end; j++)
        {
            if (width[j] < minimum) minimum = width[j];
        }
        cout << minimum << endl;
    }
    return 0;
}
