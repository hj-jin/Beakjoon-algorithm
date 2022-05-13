// 2022-05-14 고등학생 멘토 수업 준비//
#include <stdio.h>
#include <string.h>
int main()
{
    int i, loc;
    int cnt[26];
    char s[105];
    for (i = 0; i < 26; i++)
        cnt[i] = -1;
    scanf("%s", s);

    for (i = 0; i < strlen(s); i++)
    {                       //여기서 i=='번째'
        loc = s[i] - 'a';   //무슨 알파벳인지 파악하기 위해 아스키코드 이용하여 상대적 위치 변환
        if (cnt[loc] == -1) //알파벳이 처음 나온 것이라면
            cnt[loc] = i;   // loc번째 알파벳이 i번째에 나왔음을 저장
    }
    for (i = 0; i < 26; i++)
        printf("%d ", cnt[i]);
    printf("\n");
}
