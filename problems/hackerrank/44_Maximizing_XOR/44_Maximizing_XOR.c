#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int maximizingXOR(int m, int n)
{
    int max = 0;
    for (int i = m; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if ((i ^ j) > max)
            {
                max = (i ^ j);
            }
        }
    }

    return max;
}

int main()
{
    int l, r;
    scanf("%d %d", &l, &r);
    int result = maximizingXOR(l, r);
    printf("%d\n", result);

    return 0;
}
