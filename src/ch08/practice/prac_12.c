/**
 * 연습문제 12 | 입력받은 두 문자열을 처리하는 프로그램
 */
#include <stdio.h>
#include <string.h>

int main() {
    char ss1[20];
    char ss2[20];
    char ss3[40] = "";      // 합칠 배열
    int r1, r2;

    puts("문자열 1을 입력하세요");
    gets(ss1);      // 문자열 입력
    puts("문자열 2을 입력하세요");
    gets(ss2);      // 문자열 입력

    strcat(ss3, ss1);       // 문자열 합치기
    strcat(ss3, ss2);       // 문자열 합치기

    printf("합쳐진 문자열 ==> %s \n", ss3);

    r1 = strlen(ss1);       // 문자열 길이
    r2 = strlen(ss2);       // 문자열 길이

    printf("문자열 1 길이 ==> %d \n", r1);
    printf("문자열 2 길이 ==> %d \n", r2);

    if (strcmp(ss1, ss2) == 0)
        puts("두 문자열은 같다.\n");
    else
        puts("두 문자열은 다른다.\n");

    return 0;
}
