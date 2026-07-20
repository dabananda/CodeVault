#include <iostream>
using namespace std;

int main()
{
    int numbers[5], even = 0, odd = 0, positive = 0, negetive = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (numbers[i] > 0)
        {
            positive++;
        }
        else if (numbers[i] < 0)
        {
            negetive++;
        }
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negetive << " valor(es) negativo(s)" << endl;

    return 0;
}
