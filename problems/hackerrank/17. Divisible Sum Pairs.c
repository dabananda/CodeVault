#include <stdio.h>
int main()
{
    int n, k, i, j, sum = 0, result = 0;
    scanf("%d %d", &n, &k);
    int array[n];
    for (i = 0; i < n; i++) scanf("%d", &array[i]);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            sum = array[i] + array[j];
            if (sum % k == 0) result++;
        }
    }
    printf("%d\n", result);
    return 0;
}
