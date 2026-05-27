#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, charge1 = 0, charge2 = 0;
        cin >> n;
        int array[n];
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        for (int k = 0; k < n; k++)
        {
            int sec1 = array[k], sec2 = array[k], count1 = 0, count2 = 0;
            while (true)
            {
                sec1 = sec1 - 30;
                if (sec1 < 0)
                {
                    count1++;
                }
                if (count1 > 1)
                {
                    break;
                }
                charge1 = charge1 + 10;
            }
            while (true)
            {
                sec2 = sec2 - 60;
                if (sec2 < 0)
                {
                    count2++;
                }
                if (count2 > 1)
                {
                    break;
                }
                charge2 = charge2 + 15;
            }
        }
        if (charge1 < charge2)
        {
            cout << "Case " << i + 1 << ": Mile " << charge1 << endl;
        }
        else if (charge2 < charge1)
        {
            cout << "Case " << i + 1 << ": Juice " << charge2 << endl;
        }
        else
        {
            cout << "Case " << i + 1 << ": Mile Juice " << charge1 << endl;
        }
    }

    return 0;
}