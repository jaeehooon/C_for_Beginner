/**
 * 연습문제 9번 | 1~1000 중에서 3의 배수나 7의 배수의 합계를 구하는 프로그램
 */
#include <stdio.h>

int main() {
    int i;
    int hap = 0;

    for(i=1; i<=1000; i++) {
        if (i % 3 == 0 || i % 7 == 0)
            hap += i;
    }

    printf("3의 배수 또는 7의 배수의 합 : %d \n", hap);
}
