#include <iostream>
using namespace std;

void display(int *newNumbers)
{
    for (int i = 0; i < 3; i++)
    {
        cout << newNumbers[i] << endl;
    }
}

int main()
{
    int numbers[3], temp;
    for (int i = 0; i < 3; i++)
    {
        cin >> numbers[i];
    }
    int copyNumbers[3];
    for (int i = 0; i < 3; i++)
    {
        copyNumbers[i] = numbers[i];
    }
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (numbers[j] < numbers[i])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    display(numbers);
    cout << endl;
    display(copyNumbers);

    return 0;
}
