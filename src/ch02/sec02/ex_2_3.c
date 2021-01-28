/**
 * 응용 2-3 | 소스 수정하기(도움말 출력)
 */
#include <stdio.h>

int main() {
    int a, b;
    int result;

    printf("첫번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);                        // a값 입력받음

    printf("두번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &b);                        // b값 입력받음

    result = a + b;
    printf(" %d + %d = %d \n", a, b, result);

    result = a - b;
    printf(" %d - %d = %d \n", a, b, result);

    result = a * b;
    printf(" %d * %d = %d \n", a, b, result);

    result = a / b;
    printf(" %d / %d = %d \n", a, b, result);
}