/**
 * Self Study 1 | 1~100의 합계를 구하는 프로그램
 */
#include <stdio.h>

int main() {
    int sum = 0;

    for(int i=1; i<=100; ) {
        sum += i;
        i++;
    }
    printf("%d \n", sum);
}
