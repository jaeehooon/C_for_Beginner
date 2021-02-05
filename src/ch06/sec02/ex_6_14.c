/**
 * 응용 6-14 | 중첩 for문 사용 예 2
 */
#include <stdio.h>

int main() {
    int i, k;

    for(i=2; i<=9; i++) {
        for(k=1; k<10; k++) {
            printf(" %d X %d =  %d \n", i, k, i*k);
        }
        printf("\n");
    }
}
