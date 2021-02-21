/**
 * 연습문제 9(2)
 *
 * 공용체의 크기는 가장 큰 멤버 변수의 크기이다.
 */
#include <stdio.h>

int main() {
    union emp {
        char a;
        int b;
        double c;
        long d;
    };

    printf("공용체 크기 ==> %d\n", sizeof(union emp));
}