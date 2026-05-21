#include <iostream>
using namespace std;

int main()
{
    int n, countIn = 0, countOut = 0;
    cin >> n;
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0 ; i < n; i++)
    {
        if (numbers[i] >= 10 && numbers[i] <= 20)
        {
            countIn++;
        }
        else
        {
            countOut++;
        }
    }
    cout << countIn << " in" << endl;
    cout << countOut << " out" << endl;

    return 0;
}
