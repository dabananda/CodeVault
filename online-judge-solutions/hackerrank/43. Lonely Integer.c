#include <stdio.h>

int lonelyinteger(int size, int* newArray)
{
    int i, j, x;
    for(i = 0; i < size; i++)
    {
        x = 0;
        for (j = 0; j < size; j++)
        {
            if (newArray[i] == newArray[j])
            {
                x++;
            }
        }
        if (x == 1)
        {
            return newArray[i];
        }
    }

    return 0;
}

int main()
{
    int Size, res;
    scanf("%d", &Size);
    int array[Size];
    for (int i = 0; i < Size; i++)
    {
        scanf("%d", &array[i]);
    }
    res = lonelyinteger(Size, array);
    printf("%d\n", res);

    return 0;
}
