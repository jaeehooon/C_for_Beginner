/**
 * Self Study | 기본 9-4의 변수를 short aa[3], char aa[3]으로 변경하여 주솟값 확인
 */
#include <stdio.h>

int main() {
    short aa[3] = {10, 20, 30};             // 2 바이트 크기
    char bb[3] = {'A', 'B', 'C'};           // 1 바이트 크기

    printf("aa[0]의 값은 %d, 주소는 %d \n", aa[0], &aa[0]);
    printf("aa[1]의 값은 %d, 주소는 %d \n", aa[1], &aa[1]);
    printf("aa[2]의 값은 %d, 주소는 %d \n", aa[2], &aa[2]);

    printf("배열 이름 aa의 값(=주소)는 %d \n\n", aa);

    printf("bb[0]의 값은 %c, 주소는 %d \n", bb[0], &bb[0]);
    printf("bb[1]의 값은 %c, 주소는 %d \n", bb[1], &bb[1]);
    printf("bb[2]의 값은 %c, 주소는 %d \n", bb[2], &bb[2]);

    printf("배열 이름 bb 값(=주소)는 %d \n", bb);

    return 0;
}