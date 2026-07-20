#include <iostream>

using namespace std;

int main()
{
	int n, m, next_prime;
	cin >> n >> m;
	for (int i = n; ; i++)
    {
        int x = i + 1, count = 0;
        for (int j = 2; j <= x / 2; j++)
        {
            if (x % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            next_prime = x;
            break;
        }
    }
    if (next_prime == m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

	return 0;
}
