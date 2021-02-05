/**
 * Self Study 4 | 1~12345 의 합계
 */
#include <stdio.h>

int main() {
    int hap=0;
    int i;

    for(i=1; i<=12345; i++) {
        hap += i;
    }
    printf(" 1에서 12345까지의 합 : %d\n", hap);
}
