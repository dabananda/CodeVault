#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, bill, i, sum = 0, refund;
    cin >> n >> k;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        sum = sum + array[i];
    }
    cin >> bill;
    int actual_bill = (sum - array[k]) / 2;
    if (bill == actual_bill) cout << "Bon Appetit" << endl;
    else
    {
        refund = bill - actual_bill;
        cout << refund << endl;
    }
    return 0;
}
