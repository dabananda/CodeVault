#include <stdio.h>
int main()
{
    int n, d, m, i, j, result = 0;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) scanf("%d", &array[i]);
    scanf("%d %d", &d, &m);
    for (i = 0; i < n - m + 1; i++)
    {
        int sum = 0;
        for (j = i; j < i + m; j++) sum += array[j];
        if (sum == d) result++;
    }
    printf("%d\n", result);
    return 0;
}
