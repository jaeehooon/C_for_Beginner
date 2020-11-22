/*
 * Self Study 2 | 배열 aa에는 3의 배수를 입력, 배열 bb에는 50개의 배열 aa를 시프트(이동)한 값을 입력
 */
#include <stdio.h>

int main() {
    int aa[100], bb[100];

    for(int i=0; i<100; i++) {
        aa[i] = (i + 1) * 3;
    }
    for(int i=0; i<50; i++) {
        bb[i] = aa[50 + i];
        bb[50 + i] = aa[i];
    }

    printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
    return 0;
}