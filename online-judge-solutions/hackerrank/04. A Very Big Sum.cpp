#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    long long array[n], sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        sum = sum + array[i];
    }
    cout << sum << endl;
    return 0;
}
