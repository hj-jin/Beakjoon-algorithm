#include <stdio.h>

int main()
{
    int i, j, n, numArr[1000], temp;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &numArr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (numArr[j] > numArr[j + 1])
            {
                temp = numArr[j + 1];
                numArr[j + 1] = numArr[j];
                numArr[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d", numArr[i]);
        printf("\n");
    }
}
