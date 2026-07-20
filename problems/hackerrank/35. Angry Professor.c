#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, k, count = 0;
        scanf("%d %d", &n, &k);
        int array[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i]);
            if (array[i] <= 0) count++;
        }
        if (count >= k) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
