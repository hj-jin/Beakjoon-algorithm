// 2022-05-14 고등학생 멘토 수업 준비//
#include <stdio.h>
#include <stdlib.h>
main()
{
    char s1[5], s2[5], t;
    int n1, n2;
    scanf("%s%s", s1, s2);
    t = s1[0];
    s1[0] = s1[2];
    s1[2] = t; // tmp(임시 저장 변수)의 사용
    t = s2[0];
    s2[0] = s2[2];
    s2[2] = t;
    n1 = atoi(s1);
    n2 = atoi(s2); // atoi 함수: 문자를 정수로 변환
    if (n1 > n2)
        printf("%d\n", n1);
    else
        printf("%d\n", n2);
}
