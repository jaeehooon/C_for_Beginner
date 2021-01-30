/**
 * 응용 3-8 | 변수에 변수 대입 예1
 */
#include <stdio.h>

int main() {
    int a, b;           // 정수형 변수 2개 선언
    float c, d;         // 실수형 변수 2개 선언

    a = 100;
    b = a;

    /*
     * f를 붙이지 않으면 float형이 아닌 double형으로 인식함
     */
    c = 111.1f;
    d = c;

    printf("a, b의 값 ==> %d, %d \n", a, b);
    printf("c, d의 값 ==> %5.1f, %5.1f \n", c, d);
}
