#include <iostream>
using namespace std;

int main()
{
    int process = 0;
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
            process++;
            int array[n], count0 = 0, count = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> array[j];
                if (array[j] == 0)
                {
                    count0++;
                }
                else
                {
                    count++;
                }
            }
            cout << "Case " << process << ": " << count - count0 << endl;
        }
    }
    return 0;
}
