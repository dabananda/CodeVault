#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    if (n <= 5)
    {
        cout << 1 << endl;
    }
    else
    {
        int value = 5;
        int temp = n;
        while (n != 0)
        {
            temp = temp / value;
            value = value - 1;
            count = count + n;
            int x = n - temp;
            if (x <= 5)
            {
                count = count + 1;
                cout << count << endl;
                break;
            } else
            {

            }
        }
    }

    return 0;
}