#include <stdio.h>
int main()
{
    int n, k, i;
    scanf("%d %d", &n, &k);
    int height[n];
    for (i = 0; i < n; i++) scanf("%d", &height[i]);
    int max = height[0];
    for (i = 0; i < n; i++)
    {
        if (height[i] > max) max = height[i];
    }
    if (max - k > 0) printf("%d\n", max - k);
    else printf("0\n");
    return 0;
}
