#include <stdio.h>
int main()
{
    long long array[5],sum = 0, i, max_sum, min_sum;
    for (i = 0; i < 5; i++)
    {
        scanf("%lld", &array[i]);
        sum = sum + array[i];
    }
    long long minimum = array[0], maximum = array[0];
    for (i = 0; i < 5; i++)
    {
        if (array[i] > maximum) maximum = array[i];
        if (array[i] < minimum) minimum = array[i];
    }
    min_sum = sum - maximum;
    max_sum = sum - minimum;
    printf("%lld %lld\n", min_sum, max_sum);
    return 0;
}
