#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, min, max, min_count = 0, max_count = 0;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++) cin >> array[i];
    min = array[0], max = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            min_count++;
        }
        if (array[i] > max)
        {
            max = array[i];
            max_count++;
        }
    }
    cout << max_count << " " << min_count << endl;
    return 0;
}
