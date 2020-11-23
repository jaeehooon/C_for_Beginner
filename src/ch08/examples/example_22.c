/**
 * 예제모음 22 | 구구단의 결과를 2차원 배열에 저장
 *
 */
#include <stdio.h>

int main() {
    int gugudan[9][9];

    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            gugudan[i][j] = (i + 1) * (j + 1);
            printf("%dX%d = %2d\t", (j + 1), (i + 1), gugudan[i][j]);
            // printf("%dX%d = %2d\t", (j + 1), (i + 1), (i + 1) * (j + 1));
            // 바로 이렇게 해도 되지만, 배열을 '저장'하라고 했기 때문에 위의 코드를 사용하지 않음
        }
        printf("\n");
    }

    return 0;
}