/*
 * 기본 8-4 | 배열의 초기화 예 1
 */
#include <stdio.h>


int main() {
    int aa[4] = {100, 200, 300, 400};           // 배열의 개수를 지정하고 초기화
    int bb[] = {100, 200, 300, 400};            // 배열의 개수를 지정하지 않고 초기화
    int cc[4] = {100, 200};                     // 배열의 일부만 초기화
    int dd[4] = {0};                            // 배열 전체를 0으로 초기화
    int i;

    for(i=0; i<4; i++) {
        printf("aa[%d] ==> %d\t", i, aa[i]);
    }
    printf("\n");

    for(i=0; i<4; i++) {
        printf("bb[%d] ==> %d\t", i, bb[i]);
    }
    printf("\n");

    for(i=0; i<4; i++) {
        printf("cc[%d] ==> %d\t", i, cc[i]);
    }
    printf("\n");

    for(i=0; i<4; i++) {
        printf("dd[%d] ==> %d\t", i, dd[i]);
    }
    printf("\n");

    return 0;
}