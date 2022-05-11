#include <stdio.h>

int main()
{
    int n, k, i, result;
    int r = 1;
    int s = 1;
    int t = 1;
    scanf("%d%d", &n, &k);

    for (i = 1; i <= n; i++)
    {
        r *= i;
    }
    for (i = 1; i <= k; i++)
    {
        s *= i;
    }
    for (i = 1; i <= (n - k); i++)
    {
        t *= i;
    }
    result = r / (s * t);
    printf("%d\n", result);
}