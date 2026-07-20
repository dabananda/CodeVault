#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Area = %0.1f\n", 0.5 * (a + b) * c);
    }
    else
    {
        printf("Perimetro = %0.1f\n", a + b + c);
    }

    return 0;
}
