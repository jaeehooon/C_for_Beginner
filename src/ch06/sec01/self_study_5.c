/**
 * Self Study 5 | 1~100 중에서 3의 배수를 더하는 프로그램
 */
#include <stdio.h>

int main() {
    int hap=0;

    for(int i=0; i<=100; i+=3) {
        hap += i;
    }
    printf(" 1부터 100사이의 3의 배수를 더한 값은 %d \n", hap);

    hap = 0;
    for(int i=0; i<=100; i++) {
        if (i % 3 == 0) {
            hap += i;
        }
    }
    printf(" 1부터 100사이의 3의 배수를 더한 값은 %d \n", hap);
}
