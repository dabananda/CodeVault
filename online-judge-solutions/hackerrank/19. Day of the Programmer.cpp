#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1918) cout << "26.09.1918" << endl;
    else if(((n <= 1917) && (n % 4 == 0)) || ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))) cout << "12.09." << n << endl;
    else cout << "13.09." << n << endl;
    return 0;
}
