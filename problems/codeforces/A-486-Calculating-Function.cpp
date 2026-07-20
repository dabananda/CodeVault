#include <iostream>

using namespace std;

int main()
{
    long long int n, result = 0;
    cin >> n;
    if (n % 2 != 0)
    {
        result = ((n + 1) / 2) * (-1);
    }
    else
    {
        result = n / 2;
    }
    cout << result << endl;

    return 0;
}
