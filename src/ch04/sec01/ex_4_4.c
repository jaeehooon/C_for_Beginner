/**
 * 응용 4-4 | 증감 연산자 사용 예
 */
#include <stdio.h>

int main() {
    int a = 10, b;

    b = a++;                // b에 10 대입 후, a는 11이 됨
    printf(" %d \n", b);

    b = ++a;                // a는 12이 되고, b에 12를 대입
    printf(" %d \n", b);
}