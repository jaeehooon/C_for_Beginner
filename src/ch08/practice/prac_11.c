/**
 * 연습문제 11 |
 */
#include <stdio.h>

int main() {
    int cc[] = {100, 200, 300, 400, 500};
    int len;

    len = sizeof(cc) / sizeof(int);                     // 요소의 개수 구하기
    // sizeof 는 배열의 크기를 알 수 있음
    printf("배열 cc[]의 요소의 개수는 %d 입니다.\n", len);

    return 0;
}
