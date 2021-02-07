/**
 * 연습문제 7번 | 1~9까지 자신에게 더한 결과를 출력하는 프로그램
 */
#include <stdio.h>

int main() {
    int i;

    for(i=1; i<10; i++) {
        printf(" %d + %d = %d \n", i, i, i+i);
    }
}
