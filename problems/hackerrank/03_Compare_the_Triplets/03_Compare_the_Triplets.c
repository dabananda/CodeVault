#include <stdio.h>
int main()
{
    int array1[3], array2[3], count1 = 0, count2 = 0, i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &array1[i]);
    }
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &array2[i]);
    }
    for (i = 0; i < 3; i++)
    {
        if (array1[i] > array2[i]) count1++;
        else if (array1[i] < array2[i]) count2++;
    }
    printf("%d %d\n", count1, count2);
    return 0;
}
