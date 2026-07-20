#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int64_t factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    printf("%I64d\n", factorial);
    return 0;
}
