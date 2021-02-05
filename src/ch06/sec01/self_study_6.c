/**
 * Self Study 6 | for문을 사용한 구구단 프로그램. 기본 6-12 를 반대로 출력
 */
#include <stdio.h>

int main() {
    int i;
    int dan;

    printf(" 몇 단? ");
    scanf("%d", &dan);

    for(i=9; i>=1; i--) {
        printf(" %d X %d = %d \n", dan, i, dan * i);
    }
}
