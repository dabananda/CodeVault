#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d, shared = 5, liked = 2, cumulative = 2;
    cin >> d;
    for (int i = 2; i <= d; i++)
    {
        shared = (shared / 2) * 3;
        liked = shared / 2;
        cumulative = cumulative + liked;
    }
    cout << cumulative << endl;
    return 0;
}
