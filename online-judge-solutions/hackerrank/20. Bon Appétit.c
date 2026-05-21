#include <stdio.h>
int main()
{
    int n, k, bill, i, sum = 0, refund;
    scanf("%d %d", &n, &k);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    scanf("%d", &bill);
    if (((sum - array[k]) / 2) == bill) printf("Bon Appetit\n");
    else
    {
        refund = bill - ((sum - array[k]) / 2);
        printf("%d\n", refund);
    }
    return 0;
}
