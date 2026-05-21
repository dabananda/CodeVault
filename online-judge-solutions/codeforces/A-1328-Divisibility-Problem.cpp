#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int a, b, count;
        cin >> a >> b;
        count = a % b;
        if (count != 0)
        {
            cout << b - count << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
