#include <iostream>
#include <cstdlib>
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
    int result = 0, min = 100000;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] == numbers[j])
            {
                result = abs(j - i);
                break;
            }
        }
        if (result < min)
        {
            min = result;
        }
    }
    if (min > 0)
    {
        cout << min << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}