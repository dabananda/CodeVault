#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        cin >> a >> b;
        if (a == -1 && b == -1)
        {
            break;
        }
        else
        {
            if (a < 50 && b > 50)
            {
                int r1 = abs(a - b);
                int r2 = (a + 100) - b;
                if (r1 > r2)
                {
                    cout << r2 << endl;
                }
                else
                {
                    cout << r1 << endl;
                }
            }
            else if (a > 50 && b < 50)
            {
                int r1 = abs(a - b);
                int r2 = abs((a - (b + 100)));
                if (r1 > r2)
                {
                    cout << r2 << endl;
                }
                else
                {
                    cout << r1 << endl;
                }
            }
            else
            {
                cout << abs(a - b) << endl;
            }
        }
    }

    return 0;
}
