#include <iostream>
using namespace std;

int main()
{
    float numbers[6], sum = 0;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] > 0)
        {
            count++;
            sum = sum + numbers[i];
        }
    }
    cout << count << " valores positivos" << endl;
    printf("%0.1f\n", sum / count);

    return 0;
}
