/**
 * 기본 8-12 | 문자열 처리 함수 strcmp() 사용 예
 */
#include <stdio.h>
#include <string.h>

int main() {
    char ss[] = "XYZ";
    char tt[] = "xyz";

    int r;

    r = strcmp(ss, tt);

    printf("두 문자열의 비교 결과 ==> %d \n", r);

    return 0;
}
