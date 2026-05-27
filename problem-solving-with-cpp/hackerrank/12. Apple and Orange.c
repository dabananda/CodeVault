#include <stdio.h>
int main()
{
    int s, t, a, b, m, n, apple_count = 0, orange_count = 0;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    int apple[m], orange[n];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &apple[i]);
        if (apple[i] + a >= s && apple[i] + a <= t) apple_count++;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &orange[i]);
        if (b + orange[i] <= t && b + orange[i] >= s) orange_count++;
    }
    printf("%d\n%d\n", apple_count, orange_count);
    return 0;
}
