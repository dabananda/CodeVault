#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int a_sum = 0, b_sum = 0, time;
    for (int i = 0; ; i++)
    {
        a_sum = a_sum + (a * 3);
        b_sum = b_sum + (b * 2);
        if (a_sum >= b_sum)
        {
            time = i;
            break;
        }
    }
    cout << time << endl;

    return 0;
}
