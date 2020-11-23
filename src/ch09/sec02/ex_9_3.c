/**
 * 기본 9-3 | 변수의 주소 알아내기
 */
#include <stdio.h>

int main() {
    int a = 100;
    int b = 200;

    printf("변수 a의 주소는 %d입니다. \n", &a);
    printf("변수 b의 주소는 %d입니다. \n", &b);

    return 0;
}
