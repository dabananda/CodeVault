#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    long long array[n], sum = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
        sum = sum + array[i];
    }
    printf("%lld\n", sum);
    return 0;
}
