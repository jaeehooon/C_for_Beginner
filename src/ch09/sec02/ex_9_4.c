/**
 * 기본 9-4 | 정수형 배열의 메모리 할당 1
 * 메모리는 바이트 단위로 나뉘고 각 바이트에는 주소가 지정되어 있음
 */
#include <stdio.h>

int main() {
    int aa[3] = {10, 20, 30};

    printf("aa[0]의 값은 %d, 주소는 %d \n", aa[0], &aa[0]);
    printf("aa[1]의 값은 %d, 주소는 %d \n", aa[1], &aa[1]);
    printf("aa[2]의 값은 %d, 주소는 %d \n", aa[2], &aa[2]);

    printf("배열 이름 aa의 값(=주소)는 %d \n", aa);
}
