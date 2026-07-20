#include <stdio.h>
int main()
{
    int n, i, count = 0, j, temp;
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) scanf("%d", &array[i]);

    // *** Array sorting ****

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        if (i < n && array[i] == array[i + 1])
        {
            count++;
            i += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}
