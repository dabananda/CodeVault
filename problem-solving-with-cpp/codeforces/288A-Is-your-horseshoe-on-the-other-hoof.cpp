#include <iostream>

using namespace std;

int main()
{
    int shoes[4], count = 0;
    cin >> shoes[0] >> shoes[1] >> shoes[2] >> shoes[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (shoes[i] == shoes[j])
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}
