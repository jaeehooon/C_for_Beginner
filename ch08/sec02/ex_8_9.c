/**
 * 기본 8-9 | 문자열 처리 함수 strlen() 사용 예
 */
#include <stdio.h>
#include <string.h>

int main() {
    char ss[] = "XYZ";
    int len;

    len = strlen(ss);

    printf("문자열 \"%s\"의 길이 ==> %d \n", ss, len);
    return 0;
}
