#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double numbers[3] = {a, b, c};
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (numbers[j] > numbers[i])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    a = numbers[0], b = numbers[1], c = numbers[2];
    if (a >= b + c)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else if (a * a == (b * b) + (c * c))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    else if (a * a > (b * b) + (c * c))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    else if (a * a < (b * b) + (c * c))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if (a == b && b == c)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
