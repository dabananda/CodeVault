#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long int participants, budget, hotels, weekends;
    while (cin >> participants >> budget >> hotels >> weekends)
    {
        long long int array[hotels];
        for (int i = 0; i < hotels; i++)
        {
            long long int cost, beds[weekends];
            cin >> cost;
            for (int j = 0; j < weekends; j++)
            {
                cin >> beds[j];
            }
            long long int n = sizeof(beds) / sizeof(beds[0]);
            sort(beds, beds + n);
            for (int j = 0; j < weekends; j++)
            {
                if (beds[j] >= participants)
                {
                    array[i] = cost * participants;
                    break;
                }
            }
        }
        long long int min = array[0];
        for (int j = 0; j < hotels; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
            }
        }
        if (min <= budget)
        {
            cout << min << endl;
        }
        else
        {
            cout << "stay home" << endl;
        }
    }

    return 0;
}