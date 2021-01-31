/**
 * Self Study 1 | 3을 왼쪽으로 10번 시프트하는 프로그램
 */
#include <stdio.h>

int main() {
    int a = 3, result;
    int i;

    for(i = 1; i <= 10; i++) {
        result = (a << i);
        printf("%d << %d = %d\n", a, i, result);
    }

}

