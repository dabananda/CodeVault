#include <iostream>

#define TLE ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    TLE
    int n = 9, bottles[n], sum[6];
    while (scanf("%d %d %d %d %d %d %d %d %d", &bottles[0], &bottles[1], &bottles[2], &bottles[3], &bottles[4], &bottles[5], &bottles[6], &bottles[7], &bottles[8]) != EOF)
    {
        for (int i = 0; i < 6; i++)
        {
            sum[i] = 0;
        }
        for (int i = 0; i < 9; i++)
        {
            if (i == 0 || i == 5 || i == 7)
            {
                continue;
            }
            else
            {
                sum[0] = sum[0] + bottles[i];
            }
        }
        for (int i = 0; i < 9; i++)
        {
            if (i == 0 || i == 4 || i == 8)
            {
                continue;
            }
            else
            {
                sum[1] = sum[1] + bottles[i];
            }
        }
        for (int i = 0; i < 9; i++)
        {
            if (i == 2 || i == 3 || i == 7)
            {
                continue;
            }
            else
            {
                sum[2] = sum[2] + bottles[i];
            }
        }
        for (int i = 0; i < 9; i++)
        {
            if (i == 2 || i == 4 || i == 6)
            {
                continue;
            }
            else
            {
                sum[3] = sum[3] + bottles[i];
            }
        }
        for (int i = 0; i < 9; i++)
        {
            if (i == 1 || i == 3 || i == 8)
            {
                continue;
            }
            else
            {
                sum[4] = sum[4] + bottles[i];
            }
        }
        for (int i = 0; i < 9; i++)
        {
            if (i == 1 || i == 5 || i == 6)
            {
                continue;
            }
            else
            {
                sum[5] = sum[5] + bottles[i];
            }
        }
        int min = sum[0], x = 0;
        for (int i = 0; i < 6; i++)
        {
            if (sum[i] < min)
            {
                min = sum[i];
                x = i;
            }
        }
        string s[6] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};
        cout << s[x] << " " << min << endl;
    }

    return 0;
}