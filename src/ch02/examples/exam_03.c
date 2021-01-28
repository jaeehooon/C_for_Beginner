/**
 * 예제모음 03 | 오류 없는 계산기
 */
#include <stdio.h>

int main() {
    int a, b;
    int result;
    char k;                     // 연산자를 입력받을 변수

    printf("첫번째 계산할 값 ==> ");
    scanf("%d", &a);
    printf("+ - * / ==> ");
    scanf(" %c", &k);            // 연산자 입력. %c 앞에 공백이 있어야함!
    printf("두번째 계산할 값 ==> ");
    scanf("%d", &b);

    if (k == '+') {
        result = a + b;
        printf(" %d + %d = %d \n", a, b, result);
    }
    if (k == '-') {
        result = a - b;
        printf(" %d - %d = %d \n", a, b, result);
    }
    if (k == '*') {
        result = a * b;
        printf(" %d * %d = %d \n", a, b, result);
    }
    if (k == '/') {
        if (b == 0) {
            printf("0으로 나누면 안됩니다. \n");
            return 0;
        }
        result = a / b;
        printf(" %d / %d = %d \n", a, b, result);
    }
    if (k == '%') {
        if (b != 0) {
            result = a % b;
            printf(" %d %% %d = %d \n", a, b, result);
        }
        else {
            printf(" 0으로 나누면 나머지 값이 안됩니다. \n");
        }
    }
}