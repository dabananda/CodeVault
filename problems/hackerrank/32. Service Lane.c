#include <stdio.h>
int main()
{
    int m, n, i;
    scanf("%d %d", &m, &n);
    int width[m];
    for (i = 0; i < m; i++) scanf("%d", &width[i]);
    for (i = 0; i < n; i++)
    {
        int start, end;
        scanf("%d %d", &start, &end);
        int minimum = width[start];
        for (int j = start; j <= end; j++)
        {
            if (width[j] < minimum) minimum = width[j];
        }
        printf("%d\n", minimum);
    }
    return 0;
}
