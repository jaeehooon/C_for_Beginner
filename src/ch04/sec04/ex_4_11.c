/**
 * 응용 4-11 | 비트 연산에 마스크를 사용한 예
 */
#include <stdio.h>

int main() {
    char a = 'A', b, c;
    char mask = 0x0F;

    printf(" %X & %X = %X \n", a, mask, a & mask);      // 논리곱 수행
    printf(" %X | %X = %X \n", a, mask, a | mask);      // 논리합 수행

    mask = 'a' - 'A';                                   // 'a' - 'A' 의 차이는 32

    b = a ^ mask;                                       // 배타적 논리곱 수행
    printf(" %c ^ %d = %c \n", a, mask, b);

    a = b ^ mask;                                       // 배타적 논리곱 수행
    printf(" %c ^ %d = %c \n", b, mask, a);
}
