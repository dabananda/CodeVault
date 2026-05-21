#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array1[3], array2[3], i, count1 = 0, count2 = 0;
    for (i = 0; i < 3; i++)
    {
        cin >> array1[i];
    }
    for (i = 0; i < 3; i++)
    {
        cin >> array2[i];
    }
    for (i = 0; i < 3; i++)
    {
        if (array1[i] > array2[i]) count1++;
        else if (array1[i] < array2[i]) count2++;
    }
    cout << count1 << " " << count2 << endl;
    return 0;
}
