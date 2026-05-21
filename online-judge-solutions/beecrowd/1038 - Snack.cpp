#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x == 1)
    {
        printf("Total: R$ %0.2f\n", y * 4.00);
    }
    else if (x == 2)
    {
        printf("Total: R$ %0.2f\n", y * 4.50);
    }
    else if (x == 3)
    {
        printf("Total: R$ %0.2f\n", y * 5.00);
    }
    else if (x == 4)
    {
        printf("Total: R$ %0.2f\n", y * 2.00);
    }
    else if (x == 5)
    {
        printf("Total: R$ %0.2f\n", y * 1.50);
    }

    return 0;
}
