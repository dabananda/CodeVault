#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) scanf("%d", &array[i]);
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            int raise = (pow(2, array[i] / 2) * 2) - 1;
            printf("%d\n", raise);
        }
        else
        {
            int raise = ((pow(2, (array[i] - 1) / 2) * 2) - 1) * 2;
            printf("%d\n", raise);
        }
    }
    return 0;
}

