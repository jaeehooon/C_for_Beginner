/**
 * 예제모음 08 | 입력된 두 실수의 산술 연산
 */
#include <stdio.h>

int main() {
    float a, b;
    float result;

    printf("첫번째 계산할 값을 입력하세요 ==> ");
    scanf("%f", &a);
    printf("두번째 계산할 값을 입력하세요 ==> ");
    scanf("%f", &b);

    result = a + b;
    printf("%5.2f + %5.2f = %5.2f \n", a, b, result);

    result = a - b;
    printf("%5.2f - %5.2f = %5.2f \n", a, b, result);

    result = a * b;
    printf("%5.2f * %5.2f = %5.2f \n", a, b, result);

    result = a / b;
    printf("%5.2f / %5.2f = %5.2f \n", a, b, result);

    result = (int)a % (int)b;           // 나머지를 구할 땐 정수형으로 형변환 해줘야함!!
    printf("%d %% %d = %d \n", (int)a, (int)b, (int)result);
}