#include <iostream>
using namespace std;

int main()
{
    int x, count = 0;
    cin >> x;
    int i = x;
    while (true)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
            count++;
        }
        if (count == 6)
        {
            break;
        }
        i++;
    }

    return 0;
}
