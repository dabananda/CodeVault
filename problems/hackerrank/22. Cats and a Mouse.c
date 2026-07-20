#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c1, c2, m, n, i, k;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d %d", &c1, &c2, &m);
        if (abs(c2 - m) < abs(c1 - m)) printf("Cat B\n");
        else if (abs(c2 - m) > abs(c1 - m)) printf("Cat A\n");
        else printf("Mouse C\n");
    }
    return 0;
}
