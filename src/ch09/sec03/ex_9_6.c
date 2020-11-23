/**
 * 기본 9-6 | 일반 변수와 포인터 변수의 관계
 */
#include <stdio.h>

int main() {
    char ch;
    char* p;

    ch = 'A';
    p = &ch;

    printf("ch가 가지고 있는 값 : ch ==> %c \n", ch);
    printf("ch의 주소(address) : &ch ==> %d \n", &ch);
    printf("p가 가지고 있는 값 : p ==> %d \n", p);
    printf("p가 가리키는 곳의 실제값 : *p ==> %c", *p);

    return 0;
}
