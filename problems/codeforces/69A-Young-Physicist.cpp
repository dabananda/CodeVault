#include <iostream>

using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int x_sum = 0, y_sum = 0, z_sum = 0;
    int array[n][3];
    for (int j = 0; j < n; j++) for (int k = 0; k < 3; k++) cin >> array[j][k];
    for (int l = 0; l < n; l++) x_sum = x_sum + array[l][0];
    for (int m = 0; m < n; m++) y_sum = y_sum + array[m][0];
    for (int o = 0; o < n; o++) z_sum = z_sum + array[o][0];
    if (x_sum == 0 && y_sum == 0 && z_sum == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
 
    return 0;
}
