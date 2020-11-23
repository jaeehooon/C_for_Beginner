/**
 * Self Study | IT CookBook을 반대 순서로 출력
 */
#include <stdio.h>

int main() {
    char s[] = "IT CookBook";
    char *p;
    int i;

    p = s;              // 포인터 변수에 배열 주소를 대입

    for (i = sizeof(s) - 2; i>=0; i--){         // 배열 s는 문자열이니까 데이터 크기(char=1)로 나눌 필요가 없음
        printf("%c", *(s + i));
    }
    printf("\n");

    return 0;
}
