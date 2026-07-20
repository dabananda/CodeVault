#include <iostream>
using namespace std;

int main()
{
    int x, y, max, min, sum = 0;
    cin >> x >> y;
    if (x == y)
    {
        cout << 0 << endl;
    }
    else
    {
        if (x > y)
        {
            max = x;
            min = y;
        }
        else
        {
            min = x;
            max = y;
        }
        for (int i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
