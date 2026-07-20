#include <iostream>

#define TLE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    TLE
    int N, L, t;
    cin >> N;
    t = N;
    while (t--)
    {
        int count = 0;
        bool condition;
        cin >> L;
        int numbers[L];
        for (int i = 0; i < L; i++)
        {
            cin >> numbers[i];
        }
        for (int i = 0; i < L; i++)
        {
            condition = false;
            for (int j = 0; j < L - i; j++)
            {
                if (numbers[j] > numbers[j + 1])
                {
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                    count++;
                    condition = true;
                }
            }
            if (!condition)
            {
                break;
            }
        }

        cout << "Optimal train swapping takes " << count << " swaps.\n";
    }

    return 0;
}
