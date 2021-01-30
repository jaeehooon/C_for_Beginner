/**
 * 연습문제 9번 (2)
 */
#include <stdio.h>

int main() {
    int a = 0x41, b = 0x61;     // a를 10진수로 표현하면 65('A'), b를 10진수로 표현하면 97('Z')

    int tol;

    tol = b - a;

    printf("%c를 소문자로 표시하면 %c이며 \n", 'K', 'K'+tol);
    printf("%c를 대문자로 표시하면 %c이다 \n", 'z', 'z'-tol);
}

