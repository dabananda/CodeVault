#include <iostream>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        count++;
        int l, w, h;
        cin >> l >> w >> h;
        if (l <= 20 && w <= 20 && h <= 20)
        {
            cout << "Case " << count << ": good" << endl;
        }
        else
        {
            cout << "Case " << count << ": bad" << endl;
        }
    }

    return 0;
}
