/**
 * 기본 8-10 | 문자열 처리 함수 strcpy() 사용 예
 */
#include <stdio.h>
#include <string.h>

int main() {
    char ss[4];
    strcpy(ss, "XYZ");      // 배열 ss에 문자열 "XYZ"를 복사한다.

    printf("문자열 ss의 내용 ==> %s \n", ss);

    return 0;
}
