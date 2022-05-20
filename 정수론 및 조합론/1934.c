#include <stdio.h>
int gcd(int a, int b)
{
    int c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int main()
{
    int x, y, gg, t, i;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d%d", &x, &y);
        gg = gcd(x, y);
        printf("%d\n", x * y / gg);
    }
}