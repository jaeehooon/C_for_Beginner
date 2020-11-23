/**
 * 응용 8-145| 2차원 배열 사용 예 2
 */
#include <stdio.h>

int main() {
    int aa[3][4];
    int i, k;

    int val = 1;

    for(i=0; i<3; i++) {
        for(k=0; k<4; k++) {
            aa[i][k] = val;
            val++;
        }
    }

    printf("aa[0][0]부터 aa[2][3]까지 출력.\n");

    for(i=0; i<3; i++) {
        for(k=0; k<4; k++) {
            printf("%3d ", aa[i][k]);
        }
        printf("\n");
    }

    return 0;
}