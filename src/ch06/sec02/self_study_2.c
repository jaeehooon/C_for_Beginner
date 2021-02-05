/**
 * Self Study 2 | 각 단의 시작을 알리는 문구를 넣은 구구단 프로그램
 */
#include <stdio.h>

int main() {
    int i, k;

    for(i=2; i<=9; i++) {
        printf("## 제  %d  단 ##\n", i);
        for(k=1; k<10; k++) {
            printf(" %d X %d =  %d \n", i, k, i*k);
        }
        printf("\n");
    }
}