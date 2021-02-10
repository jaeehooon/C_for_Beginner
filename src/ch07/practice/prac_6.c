/**
 * 연습문제 6번 | 1~100 중에서 5배수와 8배수의 합계를 구하는 프로그램
 */
#include <stdio.h>

int main() {
    int i;
    int hap = 0;

    i = 1;
    while (i <= 100) {
        if (i % 5 == 0 || i % 8 == 0)
            hap += i;

        i++;
    }
    printf(" 5배수와 8배수의 합 : %d\n", hap);
}
