/**
 * 기본 6-8 | for문을 활용하여 합계 구하기 2
 */
#include <stdio.h>

int main() {
    int hap=0;
    int i;

    for(i=1; i<=10; i++) {
        hap += i;
    }
    printf(" 1에서 10까지의 합 : %d\n", hap);
}
