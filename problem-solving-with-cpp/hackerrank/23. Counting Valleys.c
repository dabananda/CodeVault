#include <stdio.h>
int main()
{
    int n, i, count = 0, result = 0;
    scanf("%d", &n);
    char valleys;
    for (i = 1; i <= n; i++)
    {
        scanf("%c", &valleys);
        if (valleys == 'U') count++;
        else if (valleys == 'D') count--;
        if (count == 0 && valleys == 'U') result++;
    }
    printf("%d\n", result);
    return 0;
}
