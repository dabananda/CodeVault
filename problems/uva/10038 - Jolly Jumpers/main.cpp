#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int numbers[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        int diff_numbers[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            diff_numbers[i] = abs(numbers[i + 1] - numbers[i]);
        }
        sort(diff_numbers, diff_numbers + (n - 1));
        for (int i = 0; i < n - 1; i++)
        {
            if (diff_numbers[i] != i + 1)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << "Jolly\n";
        }
        else
        {
            cout << "Not jolly\n";
        }
    }

    return 0;
}