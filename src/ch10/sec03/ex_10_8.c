/**
 * 기본 10-8 | 매개변수 전달 방법 : 값으로 전달
 *
 * 값 자체를 전달하기 때문에 원래 값을 전달한 곳에는 아무런 영향을 미치지 않음
 */
#include <stdio.h>

void func1(int a) {
    a = a + 1;
    printf("전달받은 a ==> %d \n", a);
}

void main() {
    int a = 10;

    func1(a);
    printf("func1() 실행 후의 a ==> %d\n", a);
}
