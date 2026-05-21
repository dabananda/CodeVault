#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float a, b, c, r1, r2;
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        if ((b * b) - (4 * a * c) < 0)
        {
            cout << "Impossivel calcular" << endl;
        }
        else
        {
            r1 = (- b + sqrt((b * b) - (4 * a * c))) / (2 * a);
            r2 = (- b - sqrt((b * b) - (4 * a * c))) / (2 * a);
            printf("R1 = %0.5f\n", r1);
            printf("R2 = %0.5f\n", r2);
        }
    }

    return 0;
}
