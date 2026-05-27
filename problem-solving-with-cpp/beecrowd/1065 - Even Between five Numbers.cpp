#include <iostream>
using namespace std;

int main()
{
    int numbers[5], count = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << count << " valores pares" << endl;

    return 0;
}
