#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n], x[n];
    for (int i = 0; i < n; i++) cin >> array[i];
    for (int i = 0; i < n; i++)
    {
        x[i] = i + 1;
        for (int j = 0; j < n; j++)
        {
            if (x[i] == array[j])
            {
                for (int k = 0; k < n; k++)
                {
                    if ((j + 1) == array[k]) cout << k + 1 << endl;
                }
            }
        }
    }
    return 0;
}
