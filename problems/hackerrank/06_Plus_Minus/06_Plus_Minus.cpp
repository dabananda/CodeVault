#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, sum_plus = 0, sum_minus = 0, sum_zero = 0;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] > 0) sum_plus++;
        else if (array[i] < 0) sum_minus++;
        else sum_zero++;
    }
    double av_plus = (double) sum_plus / n;
    double av_minus = (double) sum_minus / n;
    double av_zero = (double) sum_zero / n;
    printf("%.6lf\n", av_plus);
    printf("%.6lf\n", av_minus);
    printf("%.6lf\n", av_zero);
    return 0;
}
