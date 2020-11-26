/**
 * 연습문제 13 | 3행 4열의 2차원 배열에 1~12를 입력하는 프로그램(for -> while 문으로) 작성
 */
#include <stdio.h>

int main() {
    int arr[3][4];      // 배열 선언
    int number = 1;
    int i = 0, j = 0;

    while (i < 3) {
        while (j < 4) {
            arr[i][j] = number;
            number++;
            j++;
        }
        i++;
        j = 0;
    }

    for(i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

}
