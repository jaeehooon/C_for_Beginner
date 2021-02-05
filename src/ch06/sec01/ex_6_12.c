/**
 * 기본 6-12 | for문을 사용한 구구단 프로그램
 */
#include <stdio.h>

int main() {
    int i;
    int dan;

    printf(" 몇 단? ");
    scanf("%d", &dan);

    for(i=1; i<=9; i++) {
        printf(" %d X %d = %d \n", dan, i, dan * i);
    }
}
