/**
 * 연습문제 9 | 데이터 10개를 입력받아 정렬
 */
#include <stdio.h>

int main() {
    int arr[10];
    int* ptr;
    int tmp;

    for (int i=0; i<10; i++) {
        printf("s[%d] 데이터 : ", i);
        scanf("%d", (arr + i));
    }

    // 정렬 전 배열
    printf("정렬 전 배열 ==> ");
    for(int i=0; i<10; i++)
        printf("%d\t", *(arr + i));

    printf("\n");

    // 정렬
    for(int i = 0; i < 9; i++) {
        for(int k = i + 1; k < 10; k++) {
            if (*(arr + k) < *(arr + i)) {
                tmp = *(arr + i);
                *(arr + i) = *(arr + k);
                *(arr + k) = tmp;
            }
        }
    }

    // 정렬 후 배열
    printf("정렬 후 배열 ==> ");
    for(int i=0; i<10; i++)
        printf("%d\t", *(arr + i));

    return 0;
}
