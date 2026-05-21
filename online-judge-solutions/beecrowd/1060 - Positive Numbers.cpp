#include <iostream>
using namespace std;

int main()
{
    float n[6];
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (n[i] > 0)
        {
            count++;
        }
    }
    cout << count << " valores positivos" << endl;

    return 0;
}
