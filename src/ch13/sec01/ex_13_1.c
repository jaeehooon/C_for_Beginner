/**
 * 기본 13-1 | 구조체 사용 예
 */
#include <stdio.h>
#include <string.h>

int main() {
    struct bibim {
        int a;
        float b;
        char c;
        char d[5];
    };

    struct bibim b1;        // 구조체 변수 b1

    b1.a = 10;
    b1.b = 1.1f;
    b1.c = 'A';
    strcpy(b1.d, "ABCD");

    printf(" b1.a ==> %d\n", b1.a);
    printf(" b2.a ==> %f\n", b1.b);
    printf(" b3.a ==> %c\n", b1.c);
    printf(" b4.a ==> %s\n", b1.d);

    return 0;
}
