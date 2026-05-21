#include <iostream>

using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        int var1, var2, sum = 0;
        cin >> var1 >> var2;
        for (int i = var1; i <= var2; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        count++;
        printf("Case %d: %d\n", count, sum);
    }

    return 0;
}