/**
 * 예제모음 26 | 포인터를 이용한 배열의 정렬
 */
#include <stdio.h>

int main() {
    int s[10] = {1, 0, 3, 2, 5, 4, 7, 6, 9, 8};
    int tmp;
    int i, k;
    int *p;

    p = s;      // 포인터 변수 p에 배열의 변수(주솟값) 대입

    // 정렬 전 배열
    printf("정렬 전 배열 s ==> ");
    for(i=0; i < sizeof(s)/sizeof(int); i++)
        printf("%d\t", *(p + i));

    printf("\n");

    // 정렬
    for(i = 0; i < sizeof(s)/sizeof(int); i++) {
        for (k = i + 1; k < sizeof(s)/sizeof(int); k++) {
            if (*(p + k) < *(p + i)) {
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
