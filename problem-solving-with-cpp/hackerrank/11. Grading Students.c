#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] >= 38)
        {
            if ((array[i] + 1) % 5 == 0) array[i] = array[i] + 1;
            else if ((array[i] + 2) % 5 == 0) array[i] = array[i] + 2;
            else array[i] = array[i];
        }
        else array[i] = array[i];
    }
    for (i = 0; i < n; i++) printf("%d\n", array[i]);
    return 0;
}
