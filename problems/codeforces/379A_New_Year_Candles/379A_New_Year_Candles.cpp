#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= x; i++)
    {
        if (i % y == 0)
        {
            x++;
        }
    }
    cout << x << endl;

    return 0;
}
