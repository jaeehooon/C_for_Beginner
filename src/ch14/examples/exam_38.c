/**
 * 예제모음 38 | static 예약어를 활용한 구구단 출력
 */
#include <stdio.h>

void gugu() {
    static int dan = 1;
    int i;

    dan++;

    printf("\n\n ** %d 단 ** \n", dan);
    for(i=1; i<=9; i++)
        printf("%2d X %2d = %2d \n", dan, i, dan*i);
}

int main() {
    int i;

    for (i = 0; i < 8; i++)
        gugu();

}
