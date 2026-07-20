#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, d1 = 0, d2 = 0, substaction;
    scanf("%d", &n);
    int array[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
            if (i == j) d1 = d1 + array[i][j];
            if (i + j == n - 1) d2 = d2 + array[i][j];
        }
    }
    substaction = abs(d1 - d2);
    printf("%d\n", substaction);
    return 0;
}
