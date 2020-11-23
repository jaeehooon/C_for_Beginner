/**
 * Self Study 4 | [기본 10-9]에서 int b = 20을 추가하여 a, b의 합계를 계산하는 함수를 완성
 */
#include <stdio.h>

void calc(int *a, int *b) {
    *a += *b;
}

void main() {
    int a = 10;
    int b = 20;
    calc(&a, &b);
    printf("a와 b의 덧셈 결과 ==> %d\n", a);
}

