/**
 * 기본 10-6 | 지역변수와 전역변수의 구분
 */
#include <stdio.h>

int a = 100;

void func1() {
    int a = 200;
    printf("func1()에서 a의 값 ==> %d\n", a);
}

int main() {
    func1();
    printf("main()에서 a의 값 ==> %d\n", a);

    return 0;
}
