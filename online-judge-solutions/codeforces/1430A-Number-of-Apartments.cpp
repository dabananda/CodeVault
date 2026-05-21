#include <iostream>
using namespace std;

int main()
{
    int t;
    int n, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 3 == 0)
        {
            ans = n / 3;
            cout << ans << " " << 0 << " " << 0 << "\n";
        }
        else if (n % 3 == 1 and n > 6)
        {
            ans = (n - 7) / 3;
            cout << ans << " " << 0 << " " << 1 << "\n";
        }
        else if (n % 3 == 2 and n > 3)
        {
            ans = (n - 5) / 3;
            cout << ans << " " << 1 << " " << 0 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
    return 0;
}
