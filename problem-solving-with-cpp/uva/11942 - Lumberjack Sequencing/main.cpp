#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string answers[n];
    for (int i = 0; i < n; i++)
    {
        int array[10], count1 = 0, count2 = 0;
        for (int & j : array)
        {
            cin >> j;
        }
        for (int k = 0; k < 10 - 1; k++)
        {
            if (array[k] >= array[k + 1])
            {
                count1++;
            }
            else
            {
                count1 = 0;
                break;
            }
        }
        for (int x = 0; x < 10 - 1; x++)
        {
            if (array[x] <= array[x + 1])
            {
                count2++;
            }
            else
            {
                count2 = 0;
                break;
            }
        }
        if (count1 > 0 || count2 > 0)
        {
            answers[i] = "Ordered";
        }
        else
        {
            answers[i] = "Unordered";
        }
    }
    cout << "Lumberjacks:" << endl;
    for (int l = 0; l < n; l++)
    {
        cout << answers[l] << endl;
    }

    return 0;
}