/**
 * 응용 9-7 | 포인터의 관계 이해하기
 *
 * 포인터 변수 정의하는 *위치
 * 1. char*p == char *p
 *
 * 2.
 * char* p
 * char* q
 *
 * 위와 char* p, q는 다름
 * char* p, q에서 p만 포인터변수
 *
 */
#include <stdio.h>

int main() {
    char ch;
    char* p;            // 문자형 포인터 변수
    char* q;            // 문자형 포인터 변수

    ch = 'A';
    p = &ch;            // ch의 주솟값 대입

    q = p;
    *q = 'Z';           // q가 가리키는 실제값을 'Z'로 변경

    printf("ch가 가지고 있는 값 : ch ==> %c \n\n", ch);

    return 0;
}
