#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, count = 0, result = 0;
    cin >> n;
    char valleys;
    for (i = 0; i < n; i++)
    {
        cin >> valleys;
        if (valleys == 'U') count++;
        else if (valleys == 'D') count--;
        if (count == 0 && valleys == 'U') result++;
    }
    cout << result << endl;
    return 0;
}
