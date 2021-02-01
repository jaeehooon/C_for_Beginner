/**
 * 연습문제 5번 | 시프트 연산 프로그램
 *
 * 시프트 연산은 정수만 연산하므로 (>>) 비트연산했을 때 정수로 결과로 나옴
 */
#include <stdio.h>

int main() {
    int a = 0x1F;               // 0001 0000 :  31
    printf("%d \n", a);         // (16 + 15)
    printf("%d \n", a >> 4);    // 1
    printf("%d \n", a << 1);    // 62
}