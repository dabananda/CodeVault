#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int relevance[10], max = relevance[0];
        string website[10];
        for (int j = 0; j < 10; j++)
        {
            cin >> website[j];
            cin >> relevance[j];
            if (relevance[j] > max)
            {
                max = relevance[j];
            }
        }
        cout << "Case #" << i + 1 << ":" << endl;
        for (int k = 0; k < 10; k++)
        {
            if (relevance[k] == max)
            {
                cout << website[k] << endl;
            }
        }
    }

    return 0;
}