#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int number, rest, temp, count = 0;
        cin >> number;
        temp = number;
        while (temp != 0)
        {
            rest = temp % 10;
            if (rest != 0 && number % rest == 0) count++;
            temp = temp / 10;
        }
        cout << count << endl;
    }
    return 0;
}
