#include <iostream>
using namespace std;

int main()
{
    float n;
    cin >> n;
    if (n <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    else
    {
        float n1;
        n = n - 2000.00;
        if (n > 1000.00)
        {
            n1 = 1000.00 * (8.00 / 100);
            n = n - 1000.00;
            if (n <= 1500.00)
            {
                n1 = n1 + (n * (18.00 / 100));
                printf("R$ %0.2f\n", n1);
            }
            else
            {
                n1 = n1 + (1500.00 * (18.00 / 100));
                n = n - 1500;
                n1 = n1 + (n * (28.00 / 100));
                printf("R$ %0.2f\n", n1);
            }
        }
        else
        {
            n1 = n * (8.00 / 100);
            printf("R$ %0.2f\n", n1);
        }
    }

    return 0;
}
