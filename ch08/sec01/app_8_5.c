/**
 * 응용 8-5 | 배열의 초기화 2
 */
#include <stdio.h>

int main() {
    int aa[100], bb[100];

    for(int i=0; i<100; i++) {
        aa[i] = i * 2;
    }
    for(int i=0; i<100; i++) {
        bb[i] = aa[100 - i - 1];
    }

    printf("bb[0]는 %d, bb[99]는 %d 입력됨\n", bb[0], bb[99]);
    return 0;
}
