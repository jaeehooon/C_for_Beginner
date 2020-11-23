/**
 * Self Study 3 | plus() 함수를 숫자 3개를 더하는 함수로 수정
 */
#include <stdio.h>

int plus(int v1, int v2, int v3) {
    int result;
    result = v1 + v2 + v3;
    return result;
}

int main() {
    int hap;

    hap = plus(100, 200, 300);

    printf("100, 200, 300의 plus() 함수 결과는 : %d\n", hap);

    return 0;
}
