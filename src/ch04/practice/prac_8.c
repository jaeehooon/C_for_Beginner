/**
 * 연습문제 8 | 초를 입력받으면 시, 분, 초로 분할해서 출력하는 프로그램
 */
#include <stdio.h>

int main() {
    int sec;

    printf("## 계산할 초는 ? ");
    scanf("%d", &sec);

    printf(" 시간은\t==> %d 시간\n", sec / 3600);

    sec %= 3600;
    printf(" 분은\t==> %d 분\n", sec / 60);

    sec %= 60;
    printf(" 초는\t==> %d 초\n", sec);
}
