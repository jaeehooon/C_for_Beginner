/**
 * 예제모음 29 | 숫자 자동 추첨 프로그램
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getNumber() {
    return rand() % 45 + 1;
}

int main() {
    short int lotto[6] = {0, };         // 배열을 모두 0으로 초기화
    int i, k, num;
    char dup = 'N';                     // 이미 뽑힌 숫자인지 체크하는 flag 변수

    printf("** 로또 추첨을 시작합니다. ** \n\n");
    srand((unsigned)time(NULL));

    for(i = 0; i<6; ) {     // 6개의 숫자가 모두 다를 때까지 반복
        num = getNumber();

        for (k = 0; k < 6; k++)
            if (lotto[k] == num) {
                dup = 'Y';
                break;
            }

        if (dup == 'N')
            lotto[i++] = num;
        else
            dup = 'N';
    }

    printf("추첨된 로또 번호 ==> ");
    for(i=0; i<6; i++) {
        printf("%2d\t", lotto[i]);
    }

    printf("\n\n");

    return 0;
}
