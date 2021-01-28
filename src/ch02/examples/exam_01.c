/**
 * 예제모음 01 | 숫자 4개를 더하는 프로그램
 */
#include <stdio.h>

int main() {
    int a, b, c, d;
    int result;

    printf("첫번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);                        // a값 입력받음
    printf("두번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &b);                        // b값 입력받음
    printf("세번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &c);                        // c값 입력받음
    printf("네번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &d);                        // d값 입력받음

    result = a + b + c + d;

    printf("%d + %d + %d + %d = %d \n", a, b, c, d, result);


}
