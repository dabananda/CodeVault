#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int number, count = 0, rest, temp;
        scanf("%d", &number);
        temp = number;
        while (temp != 0)
        {
            rest = temp % 10;
            if (rest != 0 && number % rest == 0) count++;
            temp = temp / 10;
        }
        printf("%d\n", count);
    }
    return 0;
}
