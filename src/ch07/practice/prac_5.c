/**
 * 연습문제 5번 | 총 12회 출력 반복
 */
#include <stdio.h>

int main() {
    int i = 0, k;

    while (i < 3) {
        k = 0;
        while (k < 4) {                         // 0, 1, 2, 3
            printf("중첩 while문\n");
            k++;
        }
        i++;                                    // 0, 1, 2
    }
}
