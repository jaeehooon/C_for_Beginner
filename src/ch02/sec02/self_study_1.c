/**
 * self-study 1 | 값을 3개 입력받아 덧셈과 곱셉을 수행
 */
#include <stdio.h>

int main() {
    int a, b, c;
    int result;

    printf("첫번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);                        // a값 입력받음

    printf("두번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &b);                        // b값 입력받음

    printf("세번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &c);                        // c값 입력받음

    result = a + b + c;
    printf(" %d + %d + %d= %d \n", a, b, c, result);

    result = a * b * c;
    printf(" %d * %d * %d = %d \n", a, b, c, result);
}