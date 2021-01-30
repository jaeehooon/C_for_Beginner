/**
 * 기본 3-14 | 문자열 형식 사용 예 1
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str1[10];
    char str2[10];
    char str3[10] = "CookBook";

    strcpy(str1, "Basic-C");        // "Basic-C"을 str1에 복사
    strcpy(str2, str3);             // str3의 값을 str2에 복사

    printf("str1 ==> %s \n", str1);
    printf("str2 ==> %s \n", str2);
    printf("str3 ==> %s \n", str3);
}
