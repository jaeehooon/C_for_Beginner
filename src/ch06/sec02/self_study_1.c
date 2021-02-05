/**
 * Self Study 1 | i값이 2부터 9까지, k값이 1부터 9까지 출력되도록하는 프로그램
 */
#include <stdio.h>

int main() {
    int i, k;

    for(i=2; i<10; i++) {
        for(k=1; k<10; k++) {
            printf("중첩 for문입니다. (i값: %d, k값: %d)\n", i, k);
        }
    }
}