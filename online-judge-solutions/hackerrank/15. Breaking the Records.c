#include <stdio.h>
int main()
{
    int n, i, max, min, max_count = 0, min_count = 0;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) scanf("%d", &array[i]);
    max = array[0], min = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            max_count++;
        }
        if (array[i] < min)
        {
            min = array[i];
            min_count++;
        }
    }
    printf("%d %d", max_count, min_count);
    return 0;
}
