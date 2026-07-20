#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int array[n];
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        int max = array[0], min = array[0];
        for (int k = 0; k < n; k++)
        {
            if (array[k] > max)
            {
                max = array[k];
            }
            if (array[k] < min)
            {
                min = array[k];
            }
        }
        cout << (max - min) * 2 << endl;
    }

    return 0;
}
