#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int L, count = 0;
        cin >> L;
        int numbers[L];
        for (int j = 0; j < L; j++)
        {
            cin >> numbers[j];
        }
        while (true)
        {
            for (int j = 0; j < L - 1; j++)
            {
                if (numbers[j] > numbers[j + 1])
                {
                    count++;
                }
            }
            int counter = 0;
            for (int j = 0; j < L - 1; j++)
            {
                if (numbers[j] < numbers[j + 1])
                {
                    counter++;
                }
            }
            if (counter == L - 1)
            {
                break;
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps.\n";
    }

    return 0;
}
