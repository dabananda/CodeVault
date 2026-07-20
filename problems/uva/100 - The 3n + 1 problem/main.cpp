#include <iostream>

using namespace std;

int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        int max = 0, f, s;
        if (i > j)
        {
            f = j;
            s = i;
        }
        else if (i < j)
        {
            f = i;
            s = j;
        }
        else
        {
            f = i;
            s = j;
        }
        cout << i << " " << j << " ";
        for (int l = f; l <= s; l++)
        {
            int k = l, count = 0;
            while (true)
            {
                count++;
                if (k == 1)
                {
                    break;
                }
                else if (k % 2 != 0)
                {
                    k = (3 * k) + 1;
                }
                else
                {
                    k = k / 2;
                }
            }
            if (count > max)
            {
                max = count;
            }
        }
        cout << max << endl;
    }

    return 0;
}