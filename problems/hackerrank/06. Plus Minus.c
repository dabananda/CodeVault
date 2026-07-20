#include <stdio.h>
int main()
{
    int n, i, sump = 0, sumn = 0, sumz = 0;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > 0) sump++;
        else if (array[i] < 0) sumn++;
        else sumz++;
    }
    double av_p = (double) sump / n;
    double av_n = (double) sumn / n;
    double av_z = (double) sumz / n;
    printf("%.6lf\n", av_p);
    printf("%.6lf\n", av_n);
    printf("%.6lf\n", av_z);
    return 0;
}
