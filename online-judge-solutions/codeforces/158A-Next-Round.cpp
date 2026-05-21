#include <iostream>
using namespace std;

int main()
{
    int n, k, count = 0;
    cin >> n >> k;
    int positions[n];
    for (int i = 0; i < n; i++)
    {
        cin >> positions[i];
    }
    int advance = positions[k - 1];
    for (int i = 0; i < n; i++)
    {
        if (positions[i] >= advance && positions[i] != 0)
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}
