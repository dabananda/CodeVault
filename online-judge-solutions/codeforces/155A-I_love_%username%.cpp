#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    int max = scores[0], min = scores[0];
    for (int i = 0; i < n; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            count++;
        }
        else if (scores[i] < min)
        {
            min = scores[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}