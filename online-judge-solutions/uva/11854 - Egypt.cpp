#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string calculation(int x, int y, int z)
{
    string a = "right", b = "wrong";
    if (x * x + y * y == z * z)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    while (true)
    {
        int array[3];
        string result;
        for (int i = 0; i < 3; i++)
        {
            cin >> array[i];
        }
        int n = sizeof(array) / sizeof(array[0]);
        sort(array, array + n);
        int a = array[0];
        int b = array[1];
        int c = array[2];
        if (a == 0 && b == 0 && c == 0)
        {
            break;
        }
        else
        {
            result = calculation(a, b, c);
            cout << result << "\n";
        }
    }

    return 0;
}
