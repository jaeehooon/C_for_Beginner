/**
 * 기본 8-11 | 문자열 처리 함수 strcat() 사용 예
 */
#include <stdio.h>
#include <string.h>

int main() {
    char ss[7] = "XYZ";

    strcat(ss, "ABC");      // 배열 ss의 내용 ("XYZ")에 문자열 "ABC"를 이어서 다시 ss에 대입

    printf("이어진 문자열 ss의 내용 ==> %s \n", ss);

    return 0;
}
