#include <bits/stdc++.h>
using namespace std;

int lonelyInteger(int size, int* array)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return array[i];
        }
    }

    return 0;
}

int main()
{
    int n, result;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    result = lonelyInteger(n, numbers);
    cout << result << endl;

    return 0;
}
