#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long array[5], i, max_sum, min_sum, sum = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> array[i];
        sum = sum + array[i];
    }
    long long minimum = array[0], maximum = array[0];
    for (i = 0; i < 5; i++)
    {
        if (array[i] > maximum) maximum = array[i];
        if (array[i] < minimum) minimum = array[i];
    }
    min_sum = sum - maximum;
    max_sum = sum - minimum;
    cout << min_sum << " " << max_sum << endl;
    return 0;
}
