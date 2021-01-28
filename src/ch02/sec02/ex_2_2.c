/**
 * 응용 2-2 | 소스 수정하기(키보드로 값을 입력받음)
 */
#include <stdio.h>

int main() {
    int a, b;
    int result;

    scanf("%d", &a);            // a값 입력받음
    scanf("%d", &b);            // b값 입력받음

    result = a + b;
    printf(" %d + %d = %d \n", a, b, result);

    result = a - b;
    printf(" %d - %d = %d \n", a, b, result);

    result = a * b;
    printf(" %d * %d = %d \n", a, b, result);

    result = a / b;
    printf(" %d / %d = %d \n", a, b, result);
}