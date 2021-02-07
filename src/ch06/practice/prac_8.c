/**
 * 연습문제 8번 | 1~100 중에서 홀수의 합과 짝수의 합을 구하는 프로그램
 */
#include <stdio.h>

int main() {
    int i;
    int odd_hap=0;      // 홀수 합계 변수
    int even_hap=0;     // 짝수 합계 변수

    for(i=1; i<=100; i++) {
        if (i % 2 == 0)
            even_hap += i;
        else
            odd_hap += i;
    }

    printf(" 홀수의 합 : %d \n", odd_hap);
    printf(" 짝수의 합 : %d \n", even_hap);
}