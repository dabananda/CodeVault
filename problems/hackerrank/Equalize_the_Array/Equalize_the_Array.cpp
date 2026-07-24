#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    int s = sizeof(numbers) / sizeof(numbers[0]);
    sort(numbers, numbers + s);
    int count, max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
        }
    }
    cout << n - max << endl;

    return 0;
}
