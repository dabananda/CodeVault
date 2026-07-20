#include <iostream>
using namespace std;

int main()
{
    int a, x, y, z, result;
    while (cin >> a >> x >> y >> z)
    {
        if (a == 0 && x == 0 && y == 0 && z == 0) break;
        result = 0;
        result += (a > x) ? (a - x) * 9 : (a - x + 40) * 9;
        result += (y > x) ? (y - x) * 9 : (y - x + 40) * 9;
        result += (y > z) ? (y - z) * 9 : (y - z + 40) * 9;
        result = result + 1080;
        cout << result << endl;
    }

    return 0;
}