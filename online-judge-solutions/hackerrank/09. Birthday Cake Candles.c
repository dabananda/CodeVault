#include <stdio.h>
int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int maximum = array[0];
    for (i = 0; i < n; i++)
    {
        if (maximum < array[i]) maximum = array[i];
    }
    for (i = 0; i < n; i++)
    {
        if (maximum == array[i]) count++;
    }
    printf("%d\n", count);
    return 0;
}
