/*2022-05-14 고등학생 멘토 수업 준비*/
#include <stdio.h>
#include <string.h>
main()
{
    int T, t, n, i, j, k, idx;
    char line[170], S[21];
    scanf("%d", &T);
    for (t = 0; t < T; t++)
    {
        scanf("%d%s", &n, S);
        idx = 0;
        for (j = 0; j < strlen(S); j++)
            for (k = 0; k < n; k++)
                line[idx++] = S[j];
        line[idx] = 0;
        printf("%s\n", line);
    }
}
