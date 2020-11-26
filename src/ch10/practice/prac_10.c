/**
 * 연습문제 10 | 함수의 프로토타입
 */
#include <stdio.h>

void func1(int);

int main() {
    func1(100);
}

void func1(int a) {
    printf("%d \n", a);
}
