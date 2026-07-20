#include <stdio.h>

int main()
{
    int V, n;
    scanf("%d %d", &V, &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == V)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
