#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        for (int i = 0; i < b; i++)
        {
            cout << a / b << " ";
        }
        cout << "\n";
    }
    else
    {
        int packets[b];
        int x = a / b;
        int y = a - (b * x);
        for (int i = 0; i < b; i++)
        {
            packets[i] = x;
        }
        for (int i = 0; i < y; i++)
        {
            packets[i]++;
        }
        for (int i = 0; i < b; i++)
        {
            cout << packets[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
