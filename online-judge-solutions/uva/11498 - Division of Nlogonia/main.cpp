#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int k, m, n;
        cin >> k;
        if (k == 0)
        {
            break;
        }
        else
        {
            cin >> n >> m;
            for (int i = 0; i < k; i++)
            {
                int x, y;
                cin >> x >> y;
                if (x - n > 0 && y - m > 0)
                {
                    cout << "NE" << endl;
                }
                else if (x - n > 0 && y - m < 0)
                {
                    cout << "SE" << endl;
                }
                else if (x - n < 0 && y - m > 0)
                {
                    cout << "NO" << endl;
                }
                else if (x - n < 0 && y - m < 0)
                {
                    cout << "SO" << endl;
                }
                else
                {
                    cout << "divisa" << endl;
                }
            }
        }
    }

    return 0;
}
