#include <iostream>
using namespace std;

int calculation(int number)
{
    int sum = 0;
    while (true)
    {
        int temp;
        while (number != 0)
        {
            temp = number % 10;
            sum = sum + temp;
            number = number / 10;
        }
        if (sum < 10)
        {
            break;
        }
        else
        {
            number = sum;
            sum = 0;
        }
    }

    return sum;
}

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        else
        {
            int result = calculation(n);
            cout << result << endl;
        }
    }

    return 0;
}