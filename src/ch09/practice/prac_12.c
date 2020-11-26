/**
 * 연습문제 12 |
 */
#include <stdio.h>

int main() {
    char ch = 'A';
    char* p, * q;

    p = &ch;
    q = p;                  // 포인터 변수에는 주소값을 대입해야한다!
    *q = 'Z';

    printf("ch가 가지고 있는 값 : ch ==> %c \n\n", ch);

    return 0;
}
