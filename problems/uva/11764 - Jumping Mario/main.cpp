#include <iostream>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        count++;
        int n, high = 0, low = 0;
        cin >> n;
        int heights[n];
        for (int j = 0; j < n; j++)
        {
            cin >> heights[j];
        }
        //int base = heights[0];
        for (int k = 0; k < n - 1; k++)
        {
            if (heights[k + 1] > heights[k])
            {
                high++;
            }
            if (heights[k + 1] < heights[k])
            {
                low++;
            }
        }
        cout << "Case " << count << ": " << high << " " << low << endl;
    }

    return 0;
}
