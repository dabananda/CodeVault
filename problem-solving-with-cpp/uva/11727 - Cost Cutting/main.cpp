#include <iostream>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        count++;
        int a, b, c;
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a < b && a > c))
        {
            cout << "Case " << count << ": " << a << endl;
        }
        else if ((b > a && b < c) || (b < a && b > c))
        {
            cout << "Case " << count << ": " << b << endl;
        }
        else
        {
            cout << "Case " << count << ": " << c << endl;
        }
    }

    return 0;
}
