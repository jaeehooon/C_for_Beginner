/**
 * 예제모음 04 | 정수형을 출력하는 프로그램
 */
#include <stdio.h>

int main() {
    int a;

    printf("정수를 입력하세요 ==> ");
    scanf("%d", &a);

    printf("10진수\t==> %d \n", a);
    printf("16진수\t==> %X \n", a);
    printf("8진수\t==> %o \n", a);
}
