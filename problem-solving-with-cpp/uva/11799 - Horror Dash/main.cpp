#include <iostream>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        count++;
        int n;
        cin >> n;
        int speeds[n];
        for (int j = 0; j < n; j++)
        {
            cin >> speeds[j];
        }
        int max = speeds[0];
        for (int k = 0; k < n; k++)
        {
            if (speeds[k] > max)
            {
                max = speeds[k];
            }
        }
        cout << "Case " << count << ": " << max << endl;
    }

    return 0;
}
