/**
 * 기본 6-7 | for문을 활용하여 합계 구하기 1
 */
#include <stdio.h>

int main() {
    int hap;
    int i;

    for(i=1; i<=10; i++) {
        hap += i;
    }
    printf(" 1에서 10까지의 합 : %d\n", hap);
}
