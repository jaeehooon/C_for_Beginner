/**
 * Self Study 1 | 기본 4-1의 17행 결과가 실수가 되도록 수정
 */
#include <stdio.h>

int main() {
    int a, b = 5, c = 3;

    a = b + c;
    printf(" %d + %d = %d \n", b, c, a);

    a = b - c;
    printf(" %d - %d = %d \n", b, c, a);

    a = b * c;
    printf(" %d * %d = %d \n", b, c, a);

    a = b / c;
    printf(" %d / %d = %f \n", b, c, (float)a);

    a = b % c;
    printf(" %d %% %d = %d \n", b, c, a);

}