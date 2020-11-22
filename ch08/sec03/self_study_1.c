/**
 * Self Study |
 * 배열 aa에 1, 3, 5, 7, 9, ... 와 같이 홀수를 입력하고
 * a[2][3], a[2][2], a[2][1], ... 과 같이 반대 순서로 출력되도록
 *
 */
#include <stdio.h>

int main() {
    int aa[3][4];
    int i, k;

    int val = 1;

    for(i=0; i<3; i++) {
        for(k=0; k<4; k++) {
            aa[i][k] = 2*val - 1;
            val++;
        }
    }

    printf("aa[2][3]부터 aa[0][0]까지 출력.\n");

    for(i=0; i<3; i++) {
        for(k=0; k<4; k++) {
            printf("%3d ", aa[2 - i][3 - k]);
        }
        printf("\n");
    }

    return 0;
}