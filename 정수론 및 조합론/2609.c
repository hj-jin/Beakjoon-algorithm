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
    int x, y, gg;
    scanf("%d%d", &x, &y);
    gg = gcd(x, y);
    printf("%d\n%d\n", gg, x * y / gg);
}