/**
 * 기본 6-16 | for문의 다양한 활용 예 1
 *
 * 여러 개의 초깃값과 증감식을 사용
 */
#include <stdio.h>

int main() {
    int i, k;

    for(i=1, k=1; i<=9; i++, k++) {
        printf(" %d X %d = %d \n", i, k, i*k);
    }
}
