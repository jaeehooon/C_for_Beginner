/**
 * 응용 6-9 | for문을 활용하여 합계 구하기 3
 */
#include <stdio.h>

int main() {
    int hap = 0;
    int i;

    for(i = 501; i <= 1000;i += 2) {
        hap += i;
    }

    printf(" 500에서 1000까지의 홀수의 합 : %d \n", hap);
}