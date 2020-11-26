/**
 * 연습문제 8번 | [예제모음 26]을 수정하여 큰 수부터 정렬하도록 하는 프로그램
 */
#include <stdio.h>

int main() {
    int s[10] = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8};
    int size = sizeof(s)/sizeof(int);
    int tmp;
    int i, k;
    int *p;

    p = s;      // 포인터 변수 p에 배열의 변수(주솟값) 대입

    // 정렬 전 배열
    printf("정렬 전 배열 s ==> ");
    for(i=0; i < size; i++)
        printf("%d\t", *(p + i));

    printf("\n");

    // 정렬
    for(i = 0; i < size; i++) {
        for (k = i + 1; k < size; k++) {
            if (*(p + k) > *(p + i)) {
                tmp = *(p + i);
                *(p + i) = *(p + k);
                *(p + k) = tmp;
            }
        }
    }

    // 정렬 후 배열
    printf("정렬 후 배열 s ==> ");
    for(i=0; i < sizeof(s)/sizeof(int); i++)
        printf("%d\t", *(p + i));

    return 0;
}
